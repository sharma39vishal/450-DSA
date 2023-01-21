class Solution{
public: 
    int getCount(Node *root, int l, int h){
      if(!root){
            return 0;
        }
        int lst=getCount(root->left,l,h);
        int rst=getCount(root->right,l,h);
        if(l<=root->data&&h>=root->data){
            return lst+rst+1;
        }
        return lst+rst;
    }
};
