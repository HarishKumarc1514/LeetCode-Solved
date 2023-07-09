//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
        {
            //code here.
            // map<int,int> mp;
            
            // for(int i=0;i<n1;i++)
            //  mp[A[i]]++;
            // for(int i=0;i<n2;i++)
            //  mp[B[i]]++;
            // for(int i=0;i<n3;i++)
            //  mp[C[i]]++;
             
            // vector<int> ans;
            // for(auto i:mp){
            //     if(i.second==3)
            //      ans.push_back(i.first);
            // }
            
            // return ans;
            
            int i=0,j=0,k=0;
            vector<int> ans;
            set<int> commonelement;
            
            while(i<n1 && j<n2 && k<n3){
                if(arr1[i]==arr2[j] && arr2[j] == arr3[k])
                 { //ans.push_back(arr1[i]);
                 commonelement.insert(arr1[i]);
                    i++;j++;k++; 
                 }
                else if(arr1[i]<arr2[j]) i++;
                else if(arr2[j]<arr3[k]) j++;
                else k++;
                
               
            }
            
            for(auto i : commonelement){
                ans.push_back(i);
            }
            
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends