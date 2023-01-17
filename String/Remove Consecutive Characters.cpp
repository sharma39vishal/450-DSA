class Solution{
    public:
    string sol(int i,string &s){
        if(i==s.length()){
            return "";
        }
        string gt=sol(i+1,s);
        if(gt.size()>0&&gt[gt.length()-1]==s[i]){
            return gt;
        }
        return gt+s[i];
    }
    string removeConsecutiveCharacter(string s){
        string ans=sol(0,s);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};