class Solution {
public:
    bool ok(vector<vector<char>>& board, string word,int i,int m,int n){
        if(i == word.size()){
            return true;
        }
         if (m < 0 || n < 0 ||
            m >= board.size() || n >= board[0].size()) {
            return false;
        }
        if(board[m][n] != word[i]){
            return false;
        }
        auto ch = board[m][n];
        board[m][n] = '#';
        bool found = ok(board,word,i+1,m,n+1)||ok(board,word,i+1,m,n-1)||ok(board,word,i+1,m+1,n)||ok(board,word,i+1,m-1,n);
        board[m][n] = ch;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                if(board[i][j] == word[0]){
                    if(ok(board,word,0,i,j)){
                        return true;
                    } 
                    // continue;
                }
            }
        } 
        return false;
    }
};
