class Solution{
public:
    int sol(int i,int j,vector<vector<int>>&ans,vector<vector<int>>&dp){
        if(i==ans.size()-1){
            return ans[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int x=sol(i+1,j,ans,dp)+ans[i][j];
        if(j+1<ans.size()){
            x=max(x,sol(i+1,j+1,ans,dp)+ans[i][j]);
        }
        if(j-1>=0){
            x=max(x,sol(i+1,j-1,ans,dp)+ans[i][j]);
        }
        return dp[i][j]=x;
    }
    
    int maximumPath(int n, vector<vector<int>> ans){
        int x=0;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            x=max(x,sol(0,i,ans,dp));
        }
        return x;
    }
};
