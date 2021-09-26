// Code By Preetam Singh
//Code of vertical Traversal In BST IN GFG
// Question Link -> https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
// www.linkedin.com/in/preetamsingh18


class Solution{
public:
 vector<int> verticalOrder(Node *root)
    {
        vector<int>v;
        map<int,vector<int>>mp;
        queue<pair<Node*,int>>Que;
        Que.push({root,0});
        while(Que.size()!=0){
          auto Front=Que.front();
           int hd= Front.second;
           Node* curr=Front.first;
           mp[hd].push_back(curr->data);
           Que.pop();
           if(curr->left!=NULL){
               Que.push({curr->left,hd-1});
           }
           if(curr->right!=NULL){
               Que.push({curr->right,hd+1});
           }
        }
   
       map< int,vector<int> > :: iterator it;
	for (it=mp.begin(); it!=mp.end(); it++)
	{
		for (int i=0; i<it->second.size(); ++i)
			v.push_back( it->second[i]) ;

	}
       return v; 
       
    }
};
