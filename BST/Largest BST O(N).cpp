class Solution{
    public:
    int ans=1;
    
    vector<int> sol(Node *root){
        if(!root->left&&!root->right){
            return {1,root->data,root->data,true};
        }
        vector<int>l={0,root->data-1,root->data-1,true};
        vector<int>r={0,root->data+1,root->data+1,true};
        if(root->left){
            l=sol(root->left);
        }
        if(root->right){
            r=sol(root->right);
        }
        // cout<<"Root :"<<root->data<<"LEFT :"<<l[0]<<","<<l[1]<<","<<l[2]<<","<<l[3]<<" RIGHT :"<<r[0]<<","<<r[1]<<","<<r[2]<<","<<r[3]<<endl;
        if(l[2]<root->data&&r[1]>root->data&&l[3]&&r[3]){
            ans=max(ans,r[0]+1+l[0]);
            return {r[0]+1+l[0],l[1],r[2],true};
        }
        return {0,-1,-1,false};
    }
    
    int largestBst(Node *root){
        vector<int>x= sol(root);
    	return ans;
    }
};
