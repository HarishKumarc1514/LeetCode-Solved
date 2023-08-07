//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    vector<string> ans;
    void solve(string s,int n,int i){
        if(i>=n){
            ans.push_back(s);
            return ;
        }
        
        for(int j=i;j<n;j++){
            swap(s[i],s[j]);
            solve(s,n,i+1);
            swap(s[j],s[i]);
        }
    }
    vector<string> permutation(string s)
    {
        int n=s.size();
        int i=0;
        solve(s,n,i);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends