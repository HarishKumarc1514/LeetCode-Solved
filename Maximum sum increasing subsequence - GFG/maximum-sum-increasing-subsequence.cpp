//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
// 	int solve(int arr[],vector<int> &dp,int n,int curr,int prev){
	    
// 	    if(curr==n)
// 	     return 0;
// 	    if(prev==-1 && dp[curr]!=-1)
// 	     return dp[curr];
// 	    int include=0,exclude=0;
	    
// 	    if(prev==-1 || arr[curr]>arr[prev]) 
// 	     include = arr[curr]+solve(arr,dp,n,curr+1,curr);
	    
// 	    exclude = solve(arr,dp,n,curr+1,prev);
	    
// 	    int res=max(include,exclude);
	    
// 	    if(prev!=-1)
// 	     dp[curr] = res;
        
//         return res;	    
	    
// 	}
	int maxSumIS(int arr[], int n)  
	{  
	   // Your code goes here
	   // vector<int> dp(n,-1);
	   // return solve(arr,dp,n,0,-1);
	   
	   vector<int> dp(n);
	   
	   for(int i=0;i<n;i++){
	     dp[i] = arr[i];
	     for(int j=0;j<i;j++)
	     {
	         if(arr[i]>arr[j]){
	             dp[i] =  max(dp[i],dp[j]+arr[i]);
	         }
	     }
	   }
	   
	   int maxsum=INT_MIN;
	   for(int i=0;i<n;i++)
  	    maxsum= max(maxsum,dp[i]);
       return maxsum;    
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
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends