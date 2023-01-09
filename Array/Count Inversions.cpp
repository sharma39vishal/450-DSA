class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inv=0;
    void mergearr(long long arr[],int i,int m,int j){
        vector<long long>v1,v2;
        for(long long r=i;r<=m;r++){
            v1.push_back(arr[r]);
        }
        for(long long r=m+1;r<=j;r++){
            v2.push_back(arr[r]);
        }
        long long k=i;
        long long p1=0,p2=0;
        while(p1<v1.size()&&p2<v2.size()){
            if(v1[p1]<=v2[p2]){
                arr[k]=v1[p1];
                p1++;
            }
            else{
                arr[k]=v2[p2];
                p2++;
                inv+=v1.size()-p1;
            }
            k++;
        }
        
        while(p1<v1.size()){
            arr[k]=v1[p1];
            p1++;
        k++;
        }
        while(p2<v2.size()){
            arr[k]=v2[p2];
            p2++;
            k++;
        }
        
    }
    
    void ic(long long arr[],long long i,long long j){
        if(i==j){
            return;
        }
        long long m=(i+j)/2;
        ic(arr,i,m);
        ic(arr,m+1,j);
        mergearr(arr,i,m,j);
    }
    
    long long int inversionCount(long long arr[], long long n){
        inv=0;
        ic(arr,0,n-1);
        return inv;
    }

};