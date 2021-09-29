// Code By Preetam Singh
// Construct Tree from Inorder & Preorder 
//Question Link -> https://practice.geeksforgeeks.org/problems/construct-tree-1/1



class Solution{
    public:
    Node* TreeFromINtoPR(int in[],int pre[],int istr,int iend,int pstr,int pend){
        if(istr>iend){
            return NULL;
            }
            
        int rootdata=pre[pstr];
        Node* root=new Node(rootdata);
        int rootid=-1;
        for(int i=istr;i<=iend;i++){
            if(in[i]==rootdata){
                rootid=i;
                break;
            }
        }
        
        int linstr = istr;
        int linend = rootid-1;
        int lpstr =  pstr+1;
        int lpend =  lpstr+linend-linstr;
        int rinstr = rootid+1;
        int rinend = iend;
        int rpstr =  lpend+1;
        int rpend =  pend;
        
        root->left=TreeFromINtoPR(in,pre,linstr,linend,lpstr,lpend);
        root->right=TreeFromINtoPR(in,pre,rinstr,rinend,rpstr,rpend);
        return root;
        
    }
    
    
    Node* buildTree(int in[],int pre[], int n)
    {
        return TreeFromINtoPR(in,pre,0,n-1,0,n-1);
    }
};
