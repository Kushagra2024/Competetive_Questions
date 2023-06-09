//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        int c = 0;
        sort(arr, arr + n);
        for(int i = 0; i < n; i++)
        {
            int j = i+1;
            int k = n-1;
            while(j < k)
            {
                if(arr[i] + arr[j] + arr[k] == 0)
                {
                    //chcks if present
                    return 1;
                    
                    //finds total triplet
                    c++;
                }
                else if(arr[i] + arr[j] + arr[k] > 0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return c;
    }
    
    // Brute Force
    // bool findTriplets(int arr[], int n)
    // {
    //     int c = 0;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = i+1; j < n; j++)
    //         {
    //             for (int k = j+1; k < n; k++)
    //             {
    //                 if(arr[i] + arr[j] + arr[k] == 0)
    //                 {
    //                     c++;
    //                 }
    //             }
    //         }
    //     }
    // 	return c;
    // }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends