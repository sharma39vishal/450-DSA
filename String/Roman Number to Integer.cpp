class Solution {
  public:
  int chartoint(char x){
      if(x=='I'){
          return 1;
      }
      if(x=='V'){
          return 5;
      }
      if(x=='X'){
          return 10;
      }
      if(x=='L'){
          return 50;
      }
      if(x=='C'){
          return 100;
      }
      if(x=='D'){
          return 500;
      }
      if(x=='M'){
          return 1000;
      }
  }
    int romanToDecimal(string &s) {
        int ans=chartoint(s[s.length()-1]);
        for(int i=s.length()-2;i>=0;i--){
            if(chartoint(s[i+1])>chartoint(s[i])){
                ans-=chartoint(s[i]);
            }
            else{
                ans+=chartoint(s[i]);
            }
        }
        return ans;
    }
};