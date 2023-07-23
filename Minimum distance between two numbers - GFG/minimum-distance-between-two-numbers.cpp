//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int l=-1,r=-1;
        int mindis = INT_MAX;
        
        for(int i=0;i<n;i++){
            if(a[i]==x){
                l=i;
                if(r!=-1)
                 mindis = min(mindis,l-r);
            }
            else if(a[i]==y){
                r=i;
                if(l!=-1)
                 mindis = min(mindis,r-l); 
            }
        }
        
        return mindis == INT_MAX ? -1:mindis;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends