//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
    int solve(int arr[],int n,int sum,int total,vector<vector<int>> &dp){
        
        if(n==0)
         return abs(total - 2*sum);
        
        if(dp[n][sum]!=-1)
         return dp[n][sum];
        
        int include = solve(arr,n-1,sum+arr[n],total,dp);
        int exclude = solve(arr,n-1,sum,total,dp);
        
        int mindiff = min(include,exclude);
        dp[n][sum] = mindiff;
        return mindiff;
        
    }
	int minDifference(int arr[], int n)  { 
	    int total = 0;
	    for(int i=0;i<n;i++)
	     total+=arr[i];
	    vector<vector<int>> dp(n+1,vector<int>(total+1,-1));
	    return solve(arr,n-1,0,total,dp);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends