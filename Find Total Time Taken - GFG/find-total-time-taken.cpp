//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution 
{
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) 
    {
        int sum = 0;
        int temp[n] = {0};
        
        //marking presence of 1st element
        temp[arr[0]-1] = 1;
        
        //iterating over the array starting from 2nd element
        for(int i = 1; i < n; i++)
        {
            //checking the element's presence in the temp array
            //if 1 then present => simply add value of time of that element position
            //if 0 then absent => simply add 1 and mark its presence
            if(temp[arr[i]-1])
            {
                sum += time[arr[i]-1];      //logic for true
            }
            else
            {
                sum += 1;                   //logic for false
                temp[arr[i]-1] = 1;
            }
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        
        vector<int> time(n);
        Array::input(time,n);
        
        Solution obj;
        int res = obj.totalTime(n, arr, time);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends