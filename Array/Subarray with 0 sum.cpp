class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_set<int>st;
        int x=0;
        st.insert(x);
        for(int i=0;i<n;i++){
            x+=arr[i];
            if(st.find(x)!=st.end()){
              return true;  
            }
            st.insert(x);
        }
        return false;
        //Your code here
    }
};