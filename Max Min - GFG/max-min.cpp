//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int n)
    {
    	//code here.
    // 	int maxi = INT_MIN;
    // 	int mini = INT_MAX;
    	
    // 	for(int i=0;i<n;i++){
    // 	    maxi = max(A[i],maxi);
    // 	    mini = min(A[i],mini);
    // 	}
    	
    // 	return maxi+mini;
    sort(A,A+n);
    return A[0]+A[n-1];
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends