// Code By Preetam Singh
//  Two Mirror Trees
// Question Link-> https://practice.geeksforgeeks.org/problems/two-mirror-trees/1


class Solution
{
    public:
    void Mirror(Node * a){
      if(a==NULL){
          return ;
      }
      Node* temp=a->right;
      a->right=a->left;
      a->left=temp;
      if(a->left!=NULL){
          Mirror(a->left);
      }
      if(a->right!=NULL){
          Mirror(a->right);
      }
      
    }
    void inorder(Node*a,vector<int>&v){
        if(a==NULL){
            return;
        }
        inorder(a->left,v);
        v.push_back(a->data);
        inorder(a->right,v);
    }
    void Inorder(Node*b,vector<int>&v1){
        if(b==NULL){
            return;
        }
        inorder(b->left,v1);
        v1.push_back(b->data);
        Inorder(b->right,v1);
    }
    int areMirror(Node* a, Node* b) {
        Mirror(a);
        vector<int>v,v1;
        inorder(a,v);
        Inorder(b,v1);
        int flag=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==v1[i]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        return flag;
      
    }

};
