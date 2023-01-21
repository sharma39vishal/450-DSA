class Solution
{
    public:
    int ans=-1;
     void sol(int &i,Node* root,int &k){
         if(!root){
             return ;
         }
         sol(i,root->right,k);
         i++;
         if(i==k){
             ans=root->data;
             return;
         }
         sol(i,root->left,k);
     }
    
    int kthLargest(Node *root, int k){
        ans=-1;
        int i=0;
        sol(i,root,k);
        return ans;
    }
};