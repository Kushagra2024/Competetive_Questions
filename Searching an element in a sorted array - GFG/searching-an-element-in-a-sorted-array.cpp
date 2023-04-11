//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int binSearch(int arr[], int key, int start, int end)
    {
        int mid = (start + end)/2;
        if(start > end)
        {
            return 0;
        }
        else if(arr[mid] == key)
        {
            return 1;
        }
        else if(arr[mid] > key)
        {
            return binSearch(arr, key, start, mid-1);
        }
        else
        {
            return binSearch(arr, key, mid+1, end);
        }
    }
    
    int searchInSorted(int arr[], int N, int K) 
    {
        if(K < 0)
        {
            return -1;
        }
        return binSearch(arr, K, 0, N-1);
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends