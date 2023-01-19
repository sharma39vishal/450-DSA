
class Solution
{
    public:
    long long findfive(long long x){
        long long ans=0;
        while(x){
            x=x/5;
            ans+=x;
        }
        return ans;
    }
    int findNum(int n){
            long long r=1,l=n+1;
            while(r<=l){
                long long m=(l+r)/2;
                long long t=findfive(m*5);
                // cout<<t<<" "<<m*5<<endl;
                if(t==n){
                    return m*5;
                }
                if(t>n){
                    if(findfive((m-1)*5)<n){
                        return m*5;
                    }
                    l=m-1;
                }
                else{
                    r=m+1;
                }
            }
            return -1;
        }
};