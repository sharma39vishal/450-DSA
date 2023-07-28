class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        stack<int>stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'||s[i]=='+'||s[i]=='-'||s[i]=='/'){
                int x=stk.top();
                stk.pop();
                // cout<<x<<s[i]<<stk.top()<<endl;
                if(s[i]=='*'){
                    x=stk.top()*x;
                }
                if(s[i]=='+'){
                    x=stk.top()+x;
                }
                if(s[i]=='-'){
                    x=stk.top()-x;
                }
                if(s[i]=='/'){
                    x=stk.top()/x;
                }
                stk.pop();
                stk.push(x);
            }
            else{
                stk.push(s[i]-'0');
            }
        }
        return stk.top();
    }
};