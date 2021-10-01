// Code By Preetam Singh
// https://practice.geeksforgeeks.org/problems/mirror-tree/1
// Question link ->


class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
       if(node==NULL){
           return ;
       }
       Node* temp=node->right;
       node->right=node->left;
       node->left=temp;
       if(node->left!=NULL){
           mirror(node->left);
       }
       if(node->right!=NULL){
           mirror(node->right);
       }
       
    }
};
