class Solution{
	public:
	    vector<string> ans;
	    void sol(int i,string t,string &s){
	        if(i==s.length()){
	            if(t.length()){
	                ans.push_back(t);
	            }
	            return;
	        }

	        sol(i+1,t+s[i],s);
	        sol(i+1,t,s);
	        }
		vector<string> AllPossibleStrings(string s){
		    ans.clear();
		    sol(0,"",s);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};