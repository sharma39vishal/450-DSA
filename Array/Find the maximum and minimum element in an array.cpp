
class Solution
{
   public:
    int findSum(int A[], int N){
        int ans,mi=INT_MAX,mx=INT_MIN;
        for(int i=0;i<N;i++){
            mi=min(mi,A[i]);
            mx=max(mx,A[i]);
        }
        ans=mi+mx;
        return ans;
    }

};