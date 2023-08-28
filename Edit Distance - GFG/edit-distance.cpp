//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int solve(string s,string t,int i,int j,vector<vector<int>> &dp){
        if(i==s.size())
         return t.size()-j;
        if(j==t.size())
         return s.size()-i;
        if(dp[i][j]!=-1)
         return dp[i][j];
        int ans=0;
        
        if(s[i]==t[j])
         return solve(s,t,i+1,j+1,dp);
        else
        {
            int ins = 1+solve(s,t,i,j+1,dp);
            int del = 1+solve(s,t,i+1,j,dp);
            int rep = 1+solve(s,t,i+1,j+1,dp);
            
            ans = min(ins,min(del,rep));
        }
        return dp[i][j] = ans;
    }
    int editDistance(string s, string t) {
        // Code here
        vector<vector<int>> dp(s.size(),vector<int>(t.size(),-1));
        return solve(s,t,0,0,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends