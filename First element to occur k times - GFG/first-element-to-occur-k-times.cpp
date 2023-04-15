//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        //finding the maximum element in the array
        int max_ = a[0];
        for(int i = 1; i < n; i++)
        {
            max_ = max(max_, a[i]);
        }
        
        //creating array of maximum element size
        int temp[max_] = {0};
        
        //increament the element position value in the temp array by 1 and simultaneously check if it reached the required limit or not
        for(int i = 0; i < n; i++)
        {
            temp[a[i]-1]++;
            //checking for the limit
            if(temp[a[i]-1] >= k)
            {
                return a[i];
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends