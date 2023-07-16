//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void solve(string str,int index,string curr,vector<string> &ans){
        if(index==str.size()){
            ans.push_back(curr);
            return;
        }    
        
        solve(str,index+1,curr+" "+str.substr(index,1),ans);
         
        solve(str,index+1,curr+str.substr(index,1),ans); 
    }
    vector<string> permutation(string str){
        vector<string> ans;
        solve(str,1,str.substr(0,1),ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends