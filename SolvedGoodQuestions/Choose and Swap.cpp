class Solution{
public:
    string chooseandswap(string a){
        vector<int>v(26,-1);
        for(int i=0;i<a.length();i++){
            if(v[a[i]-'a']==-1){
                v[a[i]-'a']=i;
            }
        }
        // for(int i=0;i<26;i++){
        //     cout<<(char)('a'+i)<<" "<<v[i]<<endl;
        // }
        for(int i=0;i<a.length();i++){
            for(int j=0;j<(a[i]-'a');j++){
                if(v[j]!=-1&&v[j]>i){
                 char o=a[i];
                 char s=(char)('a'+j);
                 for(int r=0;r<a.length();r++){
                     if(a[r]==o){
                         a[r]=s;
                     }
                     else if(a[r]==s){
                         a[r]=o;
                     }
                 }   
                    
                    return a;
                }
            }
        }
        return a;
    }
    
};