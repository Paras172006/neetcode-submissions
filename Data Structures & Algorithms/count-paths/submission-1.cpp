class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        dp[m-1][n-1] = 1;
        for(int i = m-1;i>=0;i--){
            for(int j = n-1;j>=0;j--){
                int d = 0;
                int r = 0;
                if(i == m-1 && j == n-1){
                    continue;
                }
                if(i+1 < m){
                    d = dp[i+1][j];
                }
                if(j+1 < n){
                    r = dp[i][j+1];
                }
                dp[i][j] = d+r;
            }
        }
        return dp[0][0];
    }
};
