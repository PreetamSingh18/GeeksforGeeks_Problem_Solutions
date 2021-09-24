// Level Order Traversal Solution By Preetam Singh 

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    
    void Printlevel(Node * node , vector<int>& v){
        if(node==NULL){
            return ;
        }
        queue<Node*>Que;
        Que.push(node);
        while(Que.size()!=0){
            Node * front = Que.front();
            v.push_back(front->data);
            Que.pop();
                if(front->left!=NULL){
                    Que.push(front->left);
                }
                if(front->right!=NULL){
                    Que.push(front->right);
                }
        }
        
    }
    
    vector<int> levelOrder(Node* node)
    { 
      vector<int>v;
      Printlevel(node,v);
      return v;
      
    }
};
