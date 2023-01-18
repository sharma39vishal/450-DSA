class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int sol(int i,int arr[],int n,vector<int>&dp){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        dp[i]=max(sol(i+1,arr,n,dp),sol(i+2,arr,n,dp)+arr[i]);
        return dp[i];
    }
    
    int FindMaxSum(int arr[], int n){
        
        vector<int>dp(n+1,-1);
        
        return sol(0,arr,n,dp);
    }
};