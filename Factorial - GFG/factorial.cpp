//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int ans = 1;
    long long int factorial(int N)
    {
        //recursive way
        if(N == 0)
        {
            return ans;
        }
        return (N * factorial(N-1));
        
        //iterative way
        // for(int i = N; i > 0; i--)
        // {
        //     ans *= i;
        // }
        // return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.factorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends