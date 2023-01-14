

int countRev (string s){
    int ob=0;
    int n=s.length();
    if(n%2==1){
        return -1;
    }
    int x=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='{'){
            if(ob==n/2){
                ans++;
                x--;
            }
            else{
                x++;
                ob++;
            }
        }
        else{
            // '}'
            if(x==0){
                ans++;
                x++;
                ob++;
            }
            else{
                x--;
            }
            
        }
    }
    return ans;
}