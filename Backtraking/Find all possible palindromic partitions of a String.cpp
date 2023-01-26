class Solution {
  public:
  bool ispal(string s){
      int i=0,j=s.length()-1;
      while(i<j){
          if(s[i]!=s[j]){
              return false;
          }
          i++;
          j--;
      }
      return true;
  }
  void sol(int i,string &s,string st,vector<string>&t,vector<vector<string>>&ans){
        // cout<<st<<endl;
        if(i==s.length()&&ispal(st)){
            t.push_back(st);
            ans.push_back(t);
            t.pop_back();
            return ;
        }
        if(i>=s.length()){
            return;
        }
        st+=s[i];
        if(ispal(st)&&i<s.length()-1){
        //   cout<<st<<endl;
           t.push_back(st);
           sol(i+1,s,"",t,ans);
           t.pop_back();
        }
        sol(i+1,s,st,t,ans);
  }
    vector<vector<string>> allPalindromicPerms(string s) {
       string st;
       vector<string>t;
       vector<vector<string>>ans;
       sol(0,s,st,t,ans);
       return ans;
    }
};