class Solution {
public:

   int s(vector<vector<int>>& grid,vector<vector<bool>>& vis,int i,int j,int m,int n,int cnt){
    if(i<0 || j<0 || i >= m || j >= n || vis[i][j] == true || grid[i][j] == 0){
        return cnt;
    }
    vis[i][j] = true;
     cnt = 1 + 
    +s(grid,vis,i+1,j,m,n,cnt)
     +s(grid,vis,i-1,j,m,n,cnt)
      +s(grid,vis,i,j+1,m,n,cnt)
      +s(grid,vis,i,j-1,m,n,cnt);
      return cnt;
      
   }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
         int maxi = 0;
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    maxi = max(maxi,s(grid,vis,i,j,m,n,0));
                }
            }
        }
        return maxi;
    }
};
