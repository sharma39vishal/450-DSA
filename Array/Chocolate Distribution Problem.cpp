class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long long ans=a[n-1]-a[0];
    for(long long i=0;i<n-m+1;i++){
        ans=min(ans,a[i+m-1]-a[i]);
    }
    return ans;
    }   
};


class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long ans=INT_MAX;
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" "; 
    // }
    // cout<<endl;
    for(int i=m;i<=n;i++){
        // cout<<a[i-1]<<"-"<<a[i-m]<<endl;
        ans=min(a[i-1]-a[i-m],ans);
    }
    return ans;
    }   
};