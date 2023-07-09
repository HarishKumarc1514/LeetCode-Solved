//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
        sort(arr,arr+n);
        sort(dep,dep+n);
        
        int pltnedd =1,mxplat=1;
        int arrptr=1,depptr=0;
        
       while( arrptr<n && depptr<n){
          if(arr[arrptr] <=dep[depptr] ){
              pltnedd++;
              arrptr++;
          } 
          else{
              pltnedd--;
              depptr++;
          }
          mxplat = max(mxplat,pltnedd);
       }
       return mxplat;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends