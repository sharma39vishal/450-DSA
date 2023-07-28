
class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2){
          if(!root){
              return NULL;
          }
           if(root->data==n1||root->data==n2){
               return root;
           }
           Node* lst=NULL;
           Node* rst=NULL;
          lst=LCA(root->left,n1,n2);
          rst=LCA(root->right,n1,n2);
          if(lst!=NULL&&rst!=NULL){
              return root;
          }
          if(lst!=NULL){
              return lst;
          }
          if(rst!=NULL){
              return rst;
          }
           return NULL;
        }

};