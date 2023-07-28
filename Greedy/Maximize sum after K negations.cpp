class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k){
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        int mi=0;
        int val=INT_MAX;
        for(int i=0;i<n;i++){
            if(k!=0&&v[i]<0){
                // cout<<v[i]<<endl;
                v[i]=abs(v[i]);
                k--;
            }
            if(val>v[i]){
                mi=i;
                val=v[i];
            }
        }

        // sort(v.begin(),v.end());
        if(k!=0){
            if(k%2==1){
                v[mi]=v[mi]*-1;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            // cout<<v[i]<<endl;
            ans+=v[i];
        }
        return ans;
    }
};