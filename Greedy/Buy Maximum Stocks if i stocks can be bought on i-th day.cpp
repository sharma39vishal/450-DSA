class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            v.push_back({price[i],i+1});
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            int t=min(k/v[i][0],v[i][1]);
            k-=v[i][0]*t;
            ans+=t;
        }
        return ans;
    }
};