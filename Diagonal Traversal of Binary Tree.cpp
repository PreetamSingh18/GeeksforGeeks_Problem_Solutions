// Code By Preetam Singh 
// Code of Diagonal Traversal of BST in GFG 
// Queestion  link-> https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1



void Diagonal_Node(Node* root,int hd, map<int,vector<int>>&mp){
    if(root==NULL){
        return;
    }
    mp[hd].push_back(root->data);
    Diagonal_Node(root->left,hd+1,mp);
    Diagonal_Node(root->right,hd,mp);
}

vector<int> diagonal(Node *root)
{
   vector<int>v;
   map<int,vector<int>>mp;
   Diagonal_Node(root,0,mp);
   for(auto mapIt = begin(mp); mapIt != end(mp); ++mapIt)
{
    for(auto c : mapIt->second)
    {
       v.push_back(c);
    }

}
return v;
}
