class Solution {
public:
    vector<int> factorial(int n){
        vector<int>ans(1,1);
        for(int i=2;i<=n;i++){
            int c=0;
            for(int j=0;j<ans.size();j++){
                long long x=ans[j];
                x*=i;
                x+=c;
                c=x/10;
                ans[j]=x%10;
            }
            while(c){
                ans.push_back(c%10);
                c/=10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};