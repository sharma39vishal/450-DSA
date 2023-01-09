class Solution{
    public:
        void merge(long long arr1[], long long arr2[], int n, int m){ 
            int i=0,j=ceil((n+m)/2.0);
            while(j>=1){
            int x=j;
            while(j<(n+m)){
                if(i<n&&j<n){
                    if(arr1[i]>arr1[j]){
                        swap(arr1[i],arr1[j]);
                    }
                }
                else if(i<n&&j>=n){
                    if(arr1[i]>arr2[j-n]){
                        swap(arr1[i],arr2[j-n]);
                    }
                }
                else if(i>=n){
                    if(arr2[i-n]>arr2[j-n]){
                        swap(arr2[i-n],arr2[j-n]);
                    }
                }
                i++;
                j++;
            }
            i=0;
            j=ceil(x/2.0);
            
            if(x==1){
                return;
            }
            // cout<<"X :"<<x<<endl;
            // for(int r=0;r<n;r++){
            //     cout<<arr1[r]<<" ";
            // }
            // cout<<endl;
            // for(int r=0;r<m;r++){
            //     cout<<arr2[r]<<" ";
            // }
            // cout<<endl;
            
            }
        } 
};