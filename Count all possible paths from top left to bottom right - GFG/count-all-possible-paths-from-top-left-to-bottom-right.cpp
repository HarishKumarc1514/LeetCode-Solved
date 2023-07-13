//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  long long mod=1e9+7;
    long long int solve(int n, int m, vector<vector<long long int>>& dp) {
    if (m == 1 || n == 1)
        return 1;
    if (dp[n][m] != -1)
        return dp[n][m];

    long long int path = (solve(n - 1, m, dp) + solve(n, m - 1, dp))%mod;
    dp[n][m] = path;

    return path;
}



    long long int numberOfPaths(int n, int m){
        // code here
        vector<vector<long long int>> dp(n+1,vector<long long int>(m+1,-1));
        return solve(n,m,dp);
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends