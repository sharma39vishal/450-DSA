
class Solution{
public:
    int maxEqualSum(int n1,int n2,int n3,vector<int> &s1,vector<int> &s2,vector<int> &s3){
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        reverse(s3.begin(),s3.end());
        int sum1=0,sum2=0,sum3=0;
        for(int i=0;i<n1;i++){
            sum1+=s1[i];
        }
        for(int i=0;i<n2;i++){
            sum2+=s2[i];
        }
        for(int i=0;i<n3;i++){
            sum3+=s3[i];
        }
        int ans=0;
        // cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
        while(s1.size()&&s2.size()&&s3.size()){
            int mx=max({sum1,sum2,sum3});
            if(sum1==sum2&&sum3==sum1){
                ans=max(ans,sum1);
                break;
            }
            if(sum1==mx){
                sum1-=s1[s1.size()-1];
                s1.pop_back();
            }
            else if(sum2==mx){
                sum2-=s2[s2.size()-1];
                s2.pop_back();
            }
            else{
                sum3-=s3[s3.size()-1];
                s3.pop_back();
            }
        // cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
        }
        return ans;
    }
};