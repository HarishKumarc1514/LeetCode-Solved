//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; 

void preOrder(TNode* node)  
{  
    if (node == NULL)  
        return;  
    cout<<node->data<<" ";  
    preOrder(node->left);  
    preOrder(node->right);  
} 


// } Driver Code Ends
//User function Template for C++


//User function Template for C++

/* 
//Linked List
struct LNode
{
    int data;
    struct LNode* next;
    
    LNode(int x){
        data = x;
        next = NULL;
    }
};

//Tree
struct TNode  
{  
    
    int data;  
    struct TNode* left;  
    struct TNode* right; 
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; */
class Solution{
  public:
    LNode *findmid(LNode *head){
      
      LNode *slow=head;
      LNode *fast=head;
      LNode *prev = NULL;
      
      while(fast!=NULL && fast->next!=NULL){
          prev = slow;
          slow = slow->next;
          fast = fast->next->next;
      } 
      
      if(prev)
       prev->next = NULL;
      return slow; 
    }
    
    TNode* sortedListToBST(LNode *head) {
      
      if(head==NULL)
       return NULL;
       
      LNode *mid = findmid(head);
      
      TNode *root = new TNode(mid->data);
      
      if(head == mid)
       {
           root->left = nullptr; 
           root->right = nullptr;
           return root;
       }
      root->left = sortedListToBST(head);
      root->right = sortedListToBST(mid->next);
      
      return root;
       
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        LNode *head = new LNode(data);
        LNode *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new LNode(data);
            tail = tail->next;
        }
        Solution ob;
        TNode* Thead = ob.sortedListToBST(head);
        preOrder(Thead);
        cout<<"\n";
        
    }
    return 0;
}

// } Driver Code Ends