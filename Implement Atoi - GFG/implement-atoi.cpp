//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
       int ans=0,i=0;
       if(str[0]=='-')
        i++;
       for(;i<str.size();i++){
           if(isdigit(str[i]))
            ans = ans*10 + (str[i]-'0');
           else 
            return -1;
       }    
       return str[0]=='-' ? -ans:ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends