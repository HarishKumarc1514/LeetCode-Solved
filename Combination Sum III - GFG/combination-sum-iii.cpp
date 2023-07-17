//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void solve(int k, int n,int index,vector<vector<int>> &ans,vector<int> &v){
        if(k==0 && n==0){
            ans.push_back(v);
            return ;
        }
        if(k<=0 || n<=0 || index > 9 )
         return;
        
        v.push_back(index);
        solve(k-1,n-index,index+1,ans,v);
        v.pop_back();
        solve(k,n,index+1,ans,v);
    }
    vector<vector<int>> combinationSum(int k, int n) {
        // code here
        vector<vector<int>> ans;
        vector<int> v;
        solve(k,n,1,ans,v);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends