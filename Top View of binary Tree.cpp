// Code By Preetam Singh
//TOP VIEW OF BINARY TREE
//Question link -> https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1



class Solution
{
    public:
   
    vector<int> topView(Node *root)
    {
       vector<int>v;
       map<int,int>mp;
       queue<pair<Node*, int>>Que;
       Que.push({root,0});
       while(Que.size()!=0){
           auto p=Que.front();
           Node*curr=p.first;
           int hd=p.second;
           if(mp.find(hd)==mp.end()){
               mp[hd]=curr->data;
           }
           Que.pop();
           if(curr->left!=NULL){
               Que.push({curr->left,hd-1});
           }
           if(curr->right!=NULL){
               Que.push({curr->right,hd+1});
           }
           
       }
       for(auto x:mp){
           v.push_back(x.second);
       }
       return v;
    }

};
