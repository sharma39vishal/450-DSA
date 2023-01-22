class Solution{
public:
    int minimumDays(int s, int n, int m){
        if(n<m){
            return -1;
        }
                int tr=s*m;
        if(s<7){
            return ceil((float)tr/n);
        }
        if(6*n<7*m){
            return -1;
        }
        if(s<7){
            return ceil((float)tr/n);
        }
        return ceil((float)(m*s)/n);
    }
};