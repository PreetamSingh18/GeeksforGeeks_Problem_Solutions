// code By Preetam Singh
//Tree from Postorder and Inorder 
// Question Link ->https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1


Node* ConstructTreeFromIN_PO(int in[],int post[],int instr,int inend, int postr,int poend){
    if(instr>inend){
        return NULL;
    }
    
    int rootdata=post[poend];
    Node* root=new Node(rootdata);
    int rootind=-1;
    for(int i=instr;i<=inend;i++){
        if(in[i]==rootdata){
            rootind=i;
            break;
        }
    }
    
    int linstr =instr;
    int linend = rootind-1;
    int lpostr = postr;
    int lpoend = lpostr+linend-linstr;
    int rinstr = rootind+1;
    int rinend = inend;
    int rpostr = lpoend+1;
    int rpoend = poend-1;
    
    root->left=ConstructTreeFromIN_PO(in,post,linstr,linend,lpostr,lpoend);
    root->right=ConstructTreeFromIN_PO(in,post,rinstr,rinend,rpostr,rpoend);
    return root;
}

Node *buildTree(int in[], int post[], int n) {
    return ConstructTreeFromIN_PO(in,post,0,n-1,0,n-1);
}
