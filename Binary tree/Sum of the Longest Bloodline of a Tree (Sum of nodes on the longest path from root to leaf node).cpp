class Solution{
public:
    pair<int,int> sol(Node *root){
        if(!root){
            return {0,0};
        }
        pair<int,int> lst=sol(root->left);
        pair<int,int> rst=sol(root->right);
        pair<int,int> ans;
        if(lst.second>rst.second){
            ans={lst.first+root->data,lst.second+1};
        }
        else if(lst.second<rst.second){
            ans={rst.first+root->data,rst.second+1};
        }
        else if(lst.second==rst.second&&lst.first>rst.first){
            ans={lst.first+root->data,lst.second+1};
        }
        else{
            ans={rst.first+root->data,rst.second+1};
        }
        return ans;
    }
    int sumOfLongRootToLeafPath(Node *root){
        return sol(root).first;
    }
};