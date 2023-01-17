
int minFlips (string s){
    int a1=0;
    int a2=0;
    int n=s.length();
    for(int i=0;i<n;i+=2){
        if(s[i]=='1'){
            a1++;
        }
        else{
            a2++;
        }
    }
    for(int i=1;i<n;i+=2){
        if(s[i]=='1'){
            a2++;
        }
        else{
            a1++;
        }
    }
    return min(a1,a2);
}