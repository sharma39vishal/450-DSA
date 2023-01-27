class Solution{
public:
    int kthLargest(vector<int> &arr,int n,int k){
        vector<int>v;
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=i;j<n;j++){
                x+=arr[j];
                v.push_back(x);
            }
        }
        priority_queue<int>pq(v.begin(),v.end());
        for(int i=0;i<k-1&&!pq.empty();i++){
            pq.pop();
        }
        if(pq.empty()){
            return -1;
        }
        return pq.top();
    }
};