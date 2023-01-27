class Solution {
public:
    void dfs(int node,vector<int>&visit,vector<vector<int>>&adj){
        if(visit[node]==1){
            return;
        }
        visit[node]=1;
        for(int i=0;i<adj[node].size();i++){
            dfs(adj[node][i],visit,adj);
        }
    }
    int makeConnected(int n, vector<vector<int>>& con) {
        if(con.size()<n-1){
            return -1;
        }
        vector<int>visit(n,0);
        vector<vector<int>>adj(n);
        for(int i=0;i<con.size();i++){
            adj[con[i][0]].push_back(con[i][1]);
            adj[con[i][1]].push_back(con[i][0]);
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(visit[i]==0){
                ans++;
                dfs(i,visit,adj);
            }
        }        
        return ans;
    }
};