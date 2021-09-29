// Code By Preetam Singh
// Left View of Binary Tree
// Question Link-> https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1


vector<int> leftView(Node *root)
{
   vector<int>v;
   if(root!=NULL){
     
  queue<Node*>Que;
   Que.push(root);
   while(Que.size()!=0){
       int n= Que.size();
    
    for(int i=1;i<=n;i++){
        Node *temp=Que.front();
        Que.pop();
        if(i==1){
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
   }
  
      
   
   return v;
}
