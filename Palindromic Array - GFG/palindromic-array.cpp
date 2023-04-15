//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int isPalin(int N)
    {
        int temp = 0, n = N;
        
        while(n > 0)
        {
            temp = temp * 10 + n % 10;
            n = n / 10;
        }
        if(N == temp)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int PalinArray(int a[], int n)
    {
        for(int i = 0 ; i < n; i++)
        {
            if(isPalin(a[i]))
            {
                continue;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends