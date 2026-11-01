class Solution {
public:
    void dfs( vector<vector<int>>& adj,vector<bool>& vis,int i){
        vis[i] = true;
        for(auto &neig : adj[i]){
            if(!vis[neig]){
                dfs(adj,vis,neig);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
         vector<vector<int>> adj(n);
         for(auto &edge : edges){
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
         }
        int cnt = 0;
         vector<bool> vis(n,false);
         for(int i = 0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(adj,vis,i);
            }
         }

         return cnt;
    }
};
