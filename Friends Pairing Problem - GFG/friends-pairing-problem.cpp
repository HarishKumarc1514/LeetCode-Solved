//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int mod = 1e9+7;
    // int solve(int n,vector<long long> &dp){
        
    //     if(n<=2)
    //      return n;
    //     if(dp[n]!=-1)
    //      return dp[n];
        
    //     dp[n] = (solve(n-1,dp) + ((n-1)*1LL*solve(n-2,dp))%mod)%mod;
    //     return dp[n];
        
    // }
    
    int countFriendsPairings(int n) 
    { 
        vector<long long> dp(n+1);
        dp[0]=dp[1]=1;
        
        for(int i=2;i<=n;i++){
            dp[i] = (dp[i-1] + ((i-1)*dp[i-2])%mod)%mod;
        }
        return dp[n];
       // return solve(n,dp);
        
    }
};    
 

//{ Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends