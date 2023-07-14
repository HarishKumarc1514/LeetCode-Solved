//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int cnt=0;
        for(int i=0;i<n;i++){
            int num=i+1;
            
            while(num>0){
                int digit=num%10;
                if(digit==4)
                { cnt++;
                 break;}
                num/=10; 
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countNumberswith4(N) << endl;
    }
    return 0;
}
// } Driver Code Ends