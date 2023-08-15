class Solution{
    public:
    
    bool static cmp(pair<int,int>&a,pair<int,int>&b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    }
    bool static cmp1(pair<int,int>&a,pair<int,int>&b){
        return a.second<b.second;
    }
    
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++){
            int x=-1;
            for(int j=i+1;j<n;j++){
                if(v[i].second<v[j].second){
                    x=v[j].first;
                    break;
                }
            }
            v[i].first=x;
        }
        sort(v.begin(),v.end(),cmp1);
        for(int i=0;i<n;i++){
            arr[i]=v[i].first;
        }
        return arr;
    }
};