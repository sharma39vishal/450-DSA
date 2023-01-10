class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n){
      sort(arr,arr+n);
      int ans=0,li=0,c=0;
      for(int i=0;i<n;i++){
          if(li==arr[i]){
              continue;
          }
          else if(li+1==arr[i]){
              li++;
              c++;
          }
          else{
              c=1;
              li=arr[i];
          }
          ans=max(ans,c);
      }
      return ans;
    }
};