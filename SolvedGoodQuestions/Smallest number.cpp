class Solution{   
public:
    string smallestNumber(int s, int d){
        string ans;
        if(d*9<s){
            return "-1";
        }
        while(d){
            if(d==1){
                ans=(char)(s+'0')+ans;
            }
            else{
                for(int i=9;i>=0;i--){
                    if(s-i>=1){
                        s-=i;
                        ans=(char)(i+'0')+ans;
                        break;
                    }
                }
            }
            d--;
        }
        return ans;
        
    }
};