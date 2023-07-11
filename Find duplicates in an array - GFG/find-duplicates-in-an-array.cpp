//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
    //  vector<int> ans;
    //  sort(arr,arr+n);
    //  map<int,int> mp;
    //  for(int i=0;i<n;i++)
    //   mp[arr[i]]++;
     
    //  for(auto i:mp){
    //      if(i.second >1)
    //       ans.push_back(i.first);
    //  } 
    //  if(ans.empty())
    //   return {-1};
    //  return ans;   
    vector<int> table;     
    vector<int> duplicates;
    table.resize(n);
    for (int i = 0; i < n; i++)
    {
       table[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
       if (table[i] > 1)
       {
          duplicates.push_back(i);
       }
    }
    if (duplicates.size() == 0)
    {
       duplicates.push_back(-1);
    }
    return duplicates;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends