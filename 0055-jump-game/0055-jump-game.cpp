class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int reachable = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(reachable >= nums.size()-1) return true;
            if(i > reachable) return false;
            
            reachable = max(reachable, i + nums[i]);
        }
        return false;
    }
};