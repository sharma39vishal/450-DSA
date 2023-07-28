class Solution
{
public:
    vector<int> candyStore(int candies[], int n, int k){
        int j=n-1;
        vector<int>ans={0,0};
        sort(candies,candies+n);
        for(int i=0;i<=j;i++){
            ans[0]+=candies[i];
            j-=k;
        }
        j=0;
        for(int i=n-1;i>=j;i--){
            ans[1]+=candies[i];
            j+=k;
        }
        return ans;
    }
};