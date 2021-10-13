// Code By Preetam Singh
// Median Of BST
// Question Link-> https://practice.geeksforgeeks.org/problems/median-of-bst/1



void Inorder(struct Node *root,vector<int>&v){
    if(root==NULL){
        return;
    }
    Inorder(root->left,v);
    v.push_back(root->data);
    Inorder(root->right,v);
}
float findMedian(struct Node *root)
{
      vector<int>v;
      Inorder(root,v);
      int n=v.size();
      float median=0;
      if(n%2==0){
          median=(float(v[n/2]+v[(n/2)-1])/float(2));
      }
      else{
          median=float (v[n/2]);
      }
      return median;
}
