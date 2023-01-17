class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        string ans="",larg="";
        int s=0,f=0;
        for(auto it:mp){
            if(it.second>f){
               ans=larg;
               s=f;
               f=it.second;
               larg=it.first;
            }
            else if(it.second>s){
               s=it.second;
               ans=it.first;            }
            }
        return ans;
    }
};