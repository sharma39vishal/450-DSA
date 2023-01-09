class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3){
           int i=0,j=0,k=0;
           vector<int>ans;
           while(i<n1&&j<n2&&k<n3){
               if(i<n1&&(a[i]<b[j]||a[i]<c[k])){
                   i++;
               }
              if(i==n1||j==n2||k==n3){
                   return ans;
               }
               if(j<n2&&(b[j]<a[i]||b[j]<c[k])){
                   j++;
               }
              if(i==n1||j==n2||k==n3){
                   return ans;
               }
               if(k<n3&&(c[k]<b[j]||c[k]<a[i])){
                   k++;
               }
               if(i==n1||j==n2||k==n3){
                   return ans;
               }
               if(a[i]==b[j]&&b[j]==c[k]){
                   ans.push_back(a[i]);
                   int x=a[i];
                   while(a[i]==x){i++;}
               while(b[j]==x){j++;}
                              while(c[k]==x){k++;}
               }
           }
           return ans;
        }

};