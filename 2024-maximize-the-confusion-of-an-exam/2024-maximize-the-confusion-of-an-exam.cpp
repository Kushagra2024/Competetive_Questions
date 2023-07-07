class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) 
    {
        int  t = 0, f = 0, i = 0, j = 0, len;
        
        len = t+f;
        
        while(i < answerKey.size())
        {
            if(answerKey[i] == 'T')
            {
                t++;
            }
            else if(answerKey[i] == 'F')
            {
                f++;
            }
            while(min(t,f) > k)
            {
                if(answerKey[j] == 'T')
                {
                    t--;
                }
                else if(answerKey[j] == 'F')
                {
                    f--;
                }
                j++;
            }
            i++;
            len = max(len, t+f);
        }
        return (len);
        
    }
};