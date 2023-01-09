class Solution{
  public:
    int minJumps(int arr[], int n){
    int steps=arr[0];
    int maxreach=arr[0];
    int ans=1;
    if(n==1){
        return 0;
    }
    if(arr[0]==0){
        return -1;
    }
    for(int i=1;i<n;i++){
        maxreach=max(maxreach,arr[i]+i);
        steps--;
        if(i==n-1){
            return ans;
        }
        if(steps==0){
          steps=maxreach-i;
          ans++;
          if(maxreach<=i){
              return -1;
          }
        }
    }
    return ans;
    }
};