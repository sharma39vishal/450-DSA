class Solution {
	public:
		string FirstNonRepeating(string s){
		    vector<int>v(26,-1);
		    string ans;
		   for(int i=0;i<s.length();i++){
		       if(v[s[i]-'a']==-1){
		           v[s[i]-'a']=i;
		       }
		       else{
		           v[s[i]-'a']=INT_MAX;
		       }
		       
		       int x=INT_MAX-1;
		       char y='#';
		       for(int j=0;j<26;j++){
		           if(v[j]!=-1&&v[j]!=INT_MAX&&v[j]<x){
		               x=v[j];
		               y=(char)(j+'a');
		           }
		       }
		       ans+=y;
		   }
		   return ans;
		}

};