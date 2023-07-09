//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
        //Approach 2: Peak-Valley approach
    // int canReach(int A[], int N) 
    // {
    //     int reachable = 0;
        
    //     for(int i = 0; i < N; i++)
    //     {
    //         if(i > reachable)
    //         {
    //             return 0;
    //         }
    //         reachable = max(reachable, i + A[i]);
    //     }
    //     return 1;
    // }
    
    
    // /*
        //Approach 1: Brute Force
    int findMax(int arr[], int i, int j)
    {
        int max = i, k;
        for(k = i; k <= j; k++)
        {
            if(arr[max] <= arr[k])
            {
                max = k;
            }
        }
        return max;
    }
    
    int canReach(int A[], int N) 
    {
        
        if(N == 1)
        {
            return 1;
        }
        
        int i, j, size, size_index = 0;
        
        size = A[size_index];
        while(size)
        {
            i = size_index + 1;
            j = i-1 + size;
            
            if(j >= (N-1))
            {
                return 1;
            }
            
            size_index = findMax(A, i, j);
            size = A[size_index];
        }
        
        // if(size == 0)
        // {
            return 0;
        // }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends