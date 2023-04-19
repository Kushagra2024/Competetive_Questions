//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X)
    {
        int i = 0, left, right;
        
        for(i = 0; i < N; i++)
        {
            if(S[i] == '1')
            {
                left = max(i-X, 0);
                right = min(N-1, i+X);
                while(left != i)
                {
                    if(S[left] == '0')
                    {
                        S[left] = '2';
                    }
                    left++;
                }
                while(right != i)
                {
                    if(S[right] == '0')
                    {
                        S[right] = '2';
                    }
                    right--;
                }
            }
        }
        for(i = 0; i < N; i++)
        {
            if(S[i] == '0')
            {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends