class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int c = INT_MAX, start = 0, tail = 0, sum = 0;

        while(start < nums.size())
        {
            sum += nums[start];
            while(sum >= target)
            {
                c = min(c, (start-tail+1));
                sum -= nums[tail];
                tail++;
            }
            start++;
        }
        if(c != INT_MAX)
        {
            return c;
        }
        else
        {
            return 0;
        }
    }
};