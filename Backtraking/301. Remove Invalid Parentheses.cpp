class Solution {
public:
// "()())()"
int sz=0;
    void rec(int i,int x,string &s,string &t,unordered_set<string>&ans){
        if(x==0&&t.length()>0){
            // cout<<t<<endl;
            sz=max((int)sz,(int)t.length());
            ans.insert(t);
        }
         if(i>=s.length()){
            return;
        }
         rec(i+1,x,s,t,ans);        
         t.push_back(s[i]);
         if(s[i]==')'){
             x--;
         }
         if(s[i]=='('){
             x++;
         }
         if(x>=0){
              rec(i+1,x,s,t,ans);
         }
         t.pop_back();
    }
    vector<string> removeInvalidParentheses(string s) {
        if(s.length()==0){
            return {};
        }
        sz=0;
        unordered_set<string>ans;
        vector<string>ans2;
        string t;
        rec(0,0,s,t,ans);
        for(auto it:ans){
            if(it.length()==sz){
                ans2.push_back(it);
            }
        }
        if(ans.size()==0){
            return {""};
        }
        return ans2;
    }
};