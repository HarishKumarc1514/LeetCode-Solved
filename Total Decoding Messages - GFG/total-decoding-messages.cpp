//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	int mod=1e9+7;
	    int solve(int n, int index,string str,vector<int> &dp){
	        if(index == n)
	         return 1;
	        if(dp[index]!=-1)
	         return dp[index];
	        if(str[index]=='0')
	         return 0;
	        
	        int way=0;
	        way = solve(n,index+1,str,dp);
	        
	        if(index+1<n && (str[index]=='1' || (str[index]=='2' && str[index+1]<='6')))
	         way = (way+solve(n,index+2,str,dp))%mod;
	        dp[index] = way; 
	        return way; 
	    }
		int CountWays(string str){
		   int n=str.size(); 
		   vector<int> dp(n,-1); 
		   return solve(n,0,str,dp);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends