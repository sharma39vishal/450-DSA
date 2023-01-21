class Solution{
  public:
  int x=-1;
  bool ans=true;
  void sol(Node *root,int l){
      if(!root){
          return ;
      }
      if(!root->left&&!root->right){
          if(x==-1){
             x=l; 
          }
          else if(x!=l){
              ans=false;
          }
      }
      sol(root->left,l+1);
    sol(root->right,l+1);
  }
  
    bool check(Node *root){
        x=-1;
        ans=true;
        sol(root,0);
        return ans;
    }
};