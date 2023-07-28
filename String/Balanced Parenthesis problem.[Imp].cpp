class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>stk;
        for(int i=0;i<x.length();i++){
            if(x[i]=='}'){
                if(!stk.empty()&&stk.top()=='{'){
                    // cout<<"pop [ ";
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else if(x[i]==')'){
                if(!stk.empty()&&stk.top()=='('){
                    // cout<<"pop [ ";
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else if(x[i]==']'){
                if(!stk.empty()&&stk.top()=='['){
                // cout<<"pop [ ";
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else{
                // cout<<x[i]<<" ";
                stk.push(x[i]);
            }
        }
        return stk.empty();
    }

};