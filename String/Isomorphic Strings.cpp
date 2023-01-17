class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2){
        if(s1.length()!=s2.length()){
            return false;
        }
        unordered_map<char,char>mp12;
        unordered_map<char,char>mp21;
        for(int i=0;i<s1.length();i++){
            if(mp12.find(s1[i])!=mp12.end()||mp21.find(s2[i])!=mp21.end()){
                if(mp12[s1[i]]!=s2[i]||mp21[s2[i]]!=s1[i]){
                    return false;
                }
                continue;
            }
            else{
                mp21[s2[i]]=s1[i];
                mp12[s1[i]]=s2[i];
            }
        }
        return true;
    }
};