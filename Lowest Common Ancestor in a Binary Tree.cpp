// Code by Preetam Singh
//Lowest Common Ancestor in a Binary Tree 
// Question Link -> https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    { 
        if(root==NULL){
           return NULL;
       }
       if(root->data==n1 || root->data==n2){
           return root;
       }
       Node* a=lca(root->left,n1,n2);
       Node* b=lca(root->right,n1,n2);
       
       if(a && b) {
          return root;
       }
          return (a?a:b);
       
   
        
    }
};
