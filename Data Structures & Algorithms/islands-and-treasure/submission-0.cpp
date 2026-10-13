class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(grid[i][j] == 0){
                    q.push({i,j});
                }
            }
        }

        while(!q.empty()){
            auto [x,y] = q.front();
            q.pop();

             int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
            for(int k= 0;k<4;k++){
                int nx = x+dx[k];
                int ny = y+dy[k];
                if(nx < 0 || ny < 0 || nx >= grid.size() || ny >= grid[0].size()){
                    continue;
                }
                if(grid[nx][ny] != INT_MAX){
                    continue;
                }
                grid[nx][ny] = grid[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
};
