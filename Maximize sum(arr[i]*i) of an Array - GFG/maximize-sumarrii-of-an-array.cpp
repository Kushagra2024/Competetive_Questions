//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        long long int sum = 0, mod = pow(10, 9) + 7;
        sort(a, a + n);
        
        for(int i = 0; i < n; i++)
        {
            sum = sum % mod + ((a[i] % mod)*(i % mod)) % mod;
        }
        return (sum % mod);
    }
    
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends