
//  CODE BY PREETAM SINGH
// Matrix Chain Multiplication 
// Question Link -> https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1


class Solution{
public:
    int dp[101][101];
    int MCM_MEMO(int arr[],int i,int j){
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++){
            int temp=MCM_MEMO(arr,i,k)+MCM_MEMO(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
            ans=min(ans,temp);
            
        }
        dp[i][j]=ans;
        return dp[i][j];
    }
    
    
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        return MCM_MEMO(arr,1,N-1);
        
    }
};
