

// Code BY Preetam Singh
// Index Of an Extra Element
// Question Link -> https://practice.geeksforgeeks.org/problems/index-of-an-extra-element/1



class Solution{
 public:
    int findExtra(int a[], int b[], int n) {
       for(int i=0;i<n;i++){
           if(a[i]!=b[i]){
               return i;
           }
       }
    }
};
