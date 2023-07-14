//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int solve(int arr[],int index,vector<int> &dp){
	    if(index<0)
	     return  0;
	    if(dp[index]!=-1)
	     return dp[index];
	    
	    int sum = max(solve(arr,index-1,dp),solve(arr,index-2,dp)+arr[index]);
	    dp[index]=sum;
	    return sum;
	     
	}
	int findMaxSum(int *arr, int n) {
	   if(n==0)
	    return 0;
	   vector<int> dp(n,-1);
	   return solve(arr,n-1,dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends