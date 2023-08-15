class Solution{
public:
    int isStackPermutation(int n,vector<int> &a,vector<int> &b){
        int j=0;
        stack<int>stk;
        for(int i=0;i<b.size();i++){
            while(j<n&&(stk.empty()||stk.top()!=b[i])){
                stk.push(a[j]);
                j++;
            }
            if(stk.top()==b[i]){
                stk.pop();
            }
        }
        return stk.size()==0;
    }
};