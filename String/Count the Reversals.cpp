int countRev (string s)
{
    int ans=0;
    
    if(s.length()%2==1){
        return -1;
    }
   stack<char>stk;
   for(int i=0;i<s.length();i++){
       if(s[i]=='}'){
           if(!stk.empty()){
               stk.pop();
           }
           else{
               ans++;
               stk.push('{');
           }
       }
       else{
            stk.push('{');
       }
   }
   
    return ans+(stk.size()/2);
}

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