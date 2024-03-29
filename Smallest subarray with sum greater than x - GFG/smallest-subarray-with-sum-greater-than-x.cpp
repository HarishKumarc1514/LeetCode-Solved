//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 
        int ans=INT_MAX;
        int sum=0;
        int i=0,j=0;
        
        while(true){
            if(sum<=x && j<n){
                sum+=arr[j];
                j++;
            }
            else if(sum<=x && j>=n)
             break;
            else if(sum>x){
                sum-=arr[i];
                ans=min(ans,j-i);
                i++;
            } 
        }
        
        if(i==0 && j>=n)
         return 0;
         return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends