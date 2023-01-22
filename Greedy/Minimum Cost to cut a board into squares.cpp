class Solution {
public:
    int minimumCostOfBreaking(vector<int> x, vector<int> y, int m, int n){
        priority_queue<int>pqx(x.begin(),x.end());
        priority_queue<int>pqy(y.begin(),y.end());
        int ans=0,xc=1,yc=1;
        while(!pqx.empty()&&!pqy.empty()){
            if(pqx.top()>pqy.top()){
               ans+=(yc*pqx.top());
                // cout<<"X : "<<pqx.top()<<" "<<yc<<" "<<ans<<endl;
               pqx.pop();
               xc++;
            }
            else if(pqx.top()<pqy.top()){
            // cout<<"Y : "<<pqy.top()<<" "<<xc<<" ";
               ans+=(xc*pqy.top());
            //   cout<<ans<<endl;
               pqy.pop();
               yc++;
            }
            else if(xc>yc){
            //  cout<<"X : "<<pqx.top()<<" "<<yc<<" ";
               ans+=(yc*pqx.top());
            //   cout<<ans<<endl;
               pqx.pop();
               xc++;
            }
            else{
            // cout<<"Y : "<<pqy.top()<<" "<<xc<<" ";
               ans+=(xc*pqy.top());
            //   cout<<ans<<endl;
               pqy.pop();
               yc++;
            }
        }
        while(!pqx.empty()){
                // cout<<"X : "<<pqx.top()<<" "<<yc<<" ";
               ans+=(yc*pqx.top());
            //   cout<<ans<<endl;
               pqx.pop();
               xc++;
        }
        while(!pqy.empty()){
                // cout<<"Y : "<<pqy.top()<<" "<<xc<<" ";
               ans+=(xc*pqy.top());
            //   cout<<ans<<endl;
               pqy.pop();
               yc++;
        }
        return ans;
        
    }
};