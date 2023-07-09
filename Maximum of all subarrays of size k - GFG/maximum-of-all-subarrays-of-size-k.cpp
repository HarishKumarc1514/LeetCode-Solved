//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // using priority queue ;;
        // vector<int> ans;
        // priority_queue <int> q;
        
        // for(int i=0;i<k;i++)
        //  q.push(arr[i]);
        // ans.push_back(q.top()); 
        // for(int i=k;i<n;i++)
        // {
        //   q.push(arr[i]);
           
        //   while(!q.empty() && q.top() == arr[i-k])
        //     q.pop();
          
        //   ans.push_back(q.top());    
        // }
        // return ans;
        
        int left=0,right=0;
        int maxi= INT_MIN;
        
        vector<int> ans;
        
        while(right<n){
            maxi = max(maxi ,arr[right]);
            right++;
            
            if(right-left == k){
                ans.push_back(maxi);
                
                if(arr[left] == maxi)
                {
                    maxi = INT_MIN;
                    for(int i=left+1;i<right;i++)
                     maxi = max(maxi,arr[i]);
                }
                
                left++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends