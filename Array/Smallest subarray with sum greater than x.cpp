class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x){
        vector<int>v(n+1,0);
        int ans=n+1;
        v[0]=0;
        for(int i=0;i<n;i++){
            v[i+1]=arr[i]+v[i];
        }
        
        // for(int i=0;i<=n;i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        
        int i=0,j=0;
        while(i<=n&&j<=n){
            // cout<<v[j]<<" : "<<v[i]<<endl;
            if(v[j]-v[i]>x){
                ans=min(ans,j-i);
                // cout<<j<<" : "<<i<<endl;
                i++;
                if(i>=j){
                    j++;
                }
            }
            else{
             j++;   
            }
        }
        return ans;
    }
};