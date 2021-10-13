// Code By Preetam Singh
// Target Sum
// Question Link->  https://practice.geeksforgeeks.org/problems/target-sum-1626326450/1





class Solution {
  public:
    int findTargetSumWays(vector<int>&A ,int target) {
        int sum=0;
       for(int i=0;i<A.size();i++){
           sum+=A[i];
       }
       
       int s=target+sum;
      if(s%2!=0){
          return 0;
      }
       s=s/2;
       int dp[A.size()+1][s+1];
       for(int i=0;i<A.size()+1;i++){
           for(int j=0;j<s+1;j++){
               if(j==0){
                dp[i][j]=1;   
               }
               if(i==0 && j>0){
                   dp[i][j]=0;
               }
           }
       }
       for(int i=1;i<A.size()+1;i++){
           for(int j=0;j<s+1;j++){
               if(A[i-1]<=j){
                   dp[i][j]=dp[i-1][j-A[i-1]]+dp[i-1][j];
               }
               else{
                   dp[i][j]=dp[i-1][j];
               }
           }
       }
       
      return dp[A.size()][s];
       
    }
};
