//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int sum(int N)
    {
        int s = 0;
        while(N != 0)
        {
            s += (N%10);
            N /= 10;
        }
        return s;
    }
    
    int palindrome(int N)
    {
        int s = 0;
        while(N != 0)
        {
            s = s*10 + (N%10);
            N /= 10;
        }
        return s;
    }
  
    int isDigitSumPalindrome(int N) 
    {
        if(sum(N) == (palindrome(sum(N))))
        {
            return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends