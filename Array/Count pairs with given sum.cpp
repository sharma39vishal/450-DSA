class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        sort(arr,arr+n);
        int i=0,j=n-1,ans=0;
        while(i<j){

            if(arr[i]+arr[j]>k){
                j--;
            }
            else if(arr[i]+arr[j]<k){
                i++;
            }
             else{
                 if(arr[i]==arr[j]){
                     int l=j-i+1;
                     ans+=l*(l-1)/2;
                    return ans; 
                 }
                 else{
                int v1=arr[i],v2=arr[j],c1=0,c2=0;
                while(arr[i]==v1){i++;
                c1++;
                }
                while(arr[j]==v2){
                    j--;
                c2++;
                }
                ans+=c1*c2;
                 }
            }
        }
        return ans;
    }
};