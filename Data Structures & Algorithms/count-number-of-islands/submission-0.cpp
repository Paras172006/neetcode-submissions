class Solution {
public:
    void s(vector<vector<char>>& grid,vector<vector<bool>>& vis,int i,int j,int m,int n){
        
       
        if(i < 0 || j < 0 || i >= m || j >= n ||
           vis[i][j] || grid[i][j] == '0') {
            return;
        }
        vis[i][j] = true;
        s(grid,vis,i+1,j,m,n);
        s(grid,vis,i-1,j,m,n);
        s(grid,vis,i,j+1,m,n);
        s(grid,vis,i,j-1,m,n);
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        vector<vector<bool>> vis(m , vector<bool>(n,false));
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    s(grid,vis,i,j,m,n);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
