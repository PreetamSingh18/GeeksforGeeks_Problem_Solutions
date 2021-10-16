// Code By Preetam Singh
// Longest Common Substring 
// Question Link-> https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1


class Solution{
 public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    { int res=0;
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(S1[i-1]==S2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                    res=max(res,dp[i][j]);
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        return res;
    }
};
