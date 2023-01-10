
int maxProfit(vector<int>&price){
    int n=price.size();
    vector<int>pmin(n,0);
    pmin[0]=price[0];
    for(int i=1;i<n;i++){
        pmin[i]=min(pmin[i-1],price[i]);
    }
    vector<int>smax(n,0);
    smax[n-1]=price[n-1];
    for(int i=n-2;i>=0;i--){
        smax[i]=max(smax[i+1],price[i]);
    }
    vector<int>a(n,0);
    vector<int>b(n,0);
    int x=0,y=0;
    for(int i=0;i<n;i++){
        x=max(x,price[i]-pmin[i]);
        a[i]=x;
    }
    for(int i=n-1;i>=0;i--){
        y=max(y,smax[i]-price[i]);
        b[i]=y;
    }
    
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    int ans=0;
    for(int i=0;i<n-1;i++){
        ans=max(ans,b[i+1]+a[i]);
    }
    
    return ans;
}