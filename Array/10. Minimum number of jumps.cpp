
class Solution{
  public:
    int minJumps(int arr[], int n){
        int x=arr[0];
        int ans=0;
        int i=0;
        if(x+1>=n){
            return ans+1;
        }
        while(x<n&&i<=x){
            int mx=x;
            while(i<=x){
                mx=max(mx,arr[i]+i);
                i++;
            }
            
            
            if(mx>x){
                x=mx;
                ans++;
            }
            
            // cout<<mx<<" : "<<ans<<endl;
            if(x+1>=n){
                return ans+1;
            }
        }
      
        return -1;
    }
};

// 11
// 1 3 5 8 9 2 6 7 6 8 9
// 10
// 2 3 1 1 2 4 2 0 1 1


#APPROACH 2


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



