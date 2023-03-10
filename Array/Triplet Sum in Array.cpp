class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X){
        sort(a,a+n);
        
        for(int i=0;i<n-1;i++){
            int j=i+1,k=n-1;
            while(j<k){
                if((a[i]+a[j]+a[k])==X){
                    return true;
                }
                if((a[i]+a[j]+a[k])>X){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return false;
    }

};