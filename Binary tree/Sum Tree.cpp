class Solution
{
    public:
    bool ans=true;
    int sol(Node* root){
        if(!root){
            return 0;
        }
        if(!root->left&&!root->right){
            return root->data;
        }
        int lst=sol(root->left);
        int rst=sol(root->right);
        if(lst+rst!=root->data){
            ans=false;
        }
        return lst+rst+root->data;
    }
    bool isSumTree(Node* root){
         ans=true;
         int x=sol(root);
         return ans;
    }
};