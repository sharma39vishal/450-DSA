class Solution{
    public:
    bool static cmp(int a,int b){
        int x=0,y=0;
        while(a>0){
            a&=(a-1);
            x++;
        }
        while(b>0){
            b&=(b-1);
            y++;
        }
        return x>y;
    }
    void sortBySetBitCount(int arr[], int n){
        stable_sort(arr,arr+n,cmp);
    }
};