//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    
    bool find3Numbers(int arr[], int n, int x)
    {
        unordered_map<int,int> m;
       for (int i = 0; i < n; i++) {
        m[arr[i]] = i;
    }
         
        for(int i=0;i<n-1;i++)
         for(int j=i+1;j<n;j++){
            int val = x-(arr[i]+arr[j]);
            
            if(m.find(val) != m.end())
             if(m[val]!=i && m[val]!=j)
              return true;
         }
         
         return false;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends