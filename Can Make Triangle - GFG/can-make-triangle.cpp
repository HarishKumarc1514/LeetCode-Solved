//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<int> canMakeTriangle(vector<int> a, int n){
        // code here
        vector<int> ans;
        for(int i=0;i<n-2;i++){
            if(a[i]+a[i+1] > a[i+2] && a[i]+a[i+2]>a[i+1] && a[i+1]+a[i+2]>a[i])
             ans.push_back(1);
            else
             ans.push_back(0);
        }
        
        return ans;
    }
}; 

//{ Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++)
            cin>>A[i];
        Solution ob;
        auto ans = ob.canMakeTriangle(A, N);
        for(int i=0;i<ans.size();i++)
            cout << ans[i] << " ";
        cout << endl;
        
    }

    return 0; 
} 
// } Driver Code Ends