//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
    int binarySearch(int arr[], int start, int end, int key)
    {
        int mid = (start + end)/2;
        
        if(arr[mid] == key)
        {
            return mid;
        }
        if(start > end)
        {
            return -1;
        }
        if(arr[mid] > key)
        {
            return binarySearch(arr, start, mid-1, key);
        }
        else
        {
            return binarySearch(arr, mid+1, end, key);
        }
    }
  
  public:
    int binarysearch(int arr[], int n, int k) 
    {
        return binarySearch(arr, 0, n-1, k);
    }
  
  
  //Iterative Way
    // int binarysearch(int arr[], int n, int k) 
    // {
    //     int start = 0;
    //     int end = n-1;
    //     while(start <= end)
    //     {
    //         int mid = (start + end)/2;
            
    //         if(arr[mid] == k)
    //         {
    //             return mid;
    //         }
    //         if(arr[mid] > k)
    //         {
    //             end = mid-1;
    //         }
    //         else if(arr[mid] < k)
    //         {
    //             start = mid+1;
    //         }
    //     }
    //     return -1;
    // }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends