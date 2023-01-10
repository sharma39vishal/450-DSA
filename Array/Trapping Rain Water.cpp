class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        vector<int>pmin(n,0);
        pmin[0]=arr[0];
        for(int i=1;i<n;i++){
            pmin[i]=max(pmin[i-1],arr[i]);
        }
        vector<int>smin(n,0);
        smin[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            smin[i]=max(smin[i+1],arr[i]);
        }
        long long ans=0;
        // for(int i=0;i<n;i++){
        //     cout<<smin[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<pmin[i]<<" ";
        // }
        // cout<<endl;
        for(int i=1;i<n-1;i++){
            if(arr[i]<smin[i]&&arr[i]<pmin[i]){
                ans+=min(smin[i],pmin[i])-arr[i];
            }
        }
        return ans;
    }
};