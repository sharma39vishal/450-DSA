class Solution{
    public:
    int Maximize(int a[],int n)
    {
        long long ans=0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            ans=((long long)((long long)ans%1000000007)+((((long long)a[i]%1000000007)*(i%1000000007))%1000000007))%1000000007;
        }
        return ans%1000000007;
    }
};