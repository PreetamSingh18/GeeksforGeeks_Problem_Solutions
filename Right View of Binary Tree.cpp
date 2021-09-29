// Code By Preetam Singh
// Right View of Binary Tree 
// Question Link -> https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1



class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int>v;
       queue<Node*>Que;
       Que.push(root);
       while(Que.size()!=0){
           int n=Que.size();
           for(int i=1;i<=n;i++){
               Node * temp=Que.front();
               Que.pop();
               if(i==n){
                   v.push_back(temp->data);
               }
               if(temp->left!=NULL){
                   Que.push(temp->left);
               }
               if(temp->right!=NULL){
                   Que.push(temp->right);
               }
           }
           
       }
       return v;
    }
};
