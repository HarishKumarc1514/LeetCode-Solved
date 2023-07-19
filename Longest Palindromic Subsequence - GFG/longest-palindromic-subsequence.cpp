//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int solve(string str,int i,int n,vector<vector<int>> &dp){
        if(i==n)
         return 1;
        if(i>n)
         return 0;
        if(dp[i][n]!=-1)
         return dp[i][n];
        
        if(str[i]==str[n])
         dp[i][n] = solve(str,i+1,n-1,dp)+2;
        else
         dp[i][n] =  max(solve(str,i+1,n,dp),solve(str,i,n-1,dp));
        
        return dp[i][n]; 
    }
    int longestPalinSubseq(string str) {
        int n=str.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(str,0,n-1,dp);
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends