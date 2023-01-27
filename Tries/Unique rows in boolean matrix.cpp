vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
vector<vector<int>>ans;
set<vector<int>>x;
for(int i=0;i<row;i++){
    vector<int>t;
    for(int j=0;j<col;j++){
        t.push_back(M[i][j]);
    }
    if(x.find(t)==x.end()){
        ans.push_back(t);
    }
    x.insert(t);
}
// ans.assign(x.begin(),x.end());
// sort(ans.begin(),ans.end());
// reverse(ans.begin(),ans.end());
return ans;