//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats)
    {
        int i;
        
        //checks for 1st and 2nd seat
        if((seats[0] == 0) && (seats[1] == 0) && (n != 0))
        {
            seats[0] = 2;
            n--;
        }
        
        //checks for 2st to last 2nd seat
        for(i = 1; i <= m-2 && n != 0; i++)
        {
            if((seats[i] == 0) && (seats[i-1] == 0) && (seats[i+1] == 0))
            {
                seats[i] = 2;
                n--;
            }
        }
        //checks for last and 2nd last seat
        if((seats[i] == 0) && (seats[i-1] == 0) && (n != 0))
        {
            seats[i] = 2;
            n--;
        }
        
        if(n == 0)
        {
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends