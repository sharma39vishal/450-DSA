class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       vector<long long int>ans(n,1);
       vector<long long int>pm(n,1);
       vector<long long int>sm(n,1);
       if(n==1){
           return {1};
       }
       pm[0]=nums[0];
       for(int i=1;i<n;i++){
           pm[i]=nums[i]*pm[i-1];
       }
       sm[n-1]=nums[n-1];
       for(int i=n-2;i>=0;i--){
           sm[i]=nums[i]*sm[i+1];
       }
       for(int i=1;i<n-1;i++){
           ans[i]=pm[i-1]*sm[i+1];
       }
       ans[0]=sm[1];
       ans[n-1]=pm[n-2];
       return ans;
    }
};