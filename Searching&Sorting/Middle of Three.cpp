class Solution{
  public:
    int middle(int a, int b, int c){
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        return arr[1];
    }
};