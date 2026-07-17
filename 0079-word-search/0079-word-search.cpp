class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i=0; i<board.size(); ++i)
            for (int j=0; j<board[0].size(); ++j)
                if (dfs(board,word,i,j,0)) {
                    return true;
                }
        return false;
    }

private:
    bool dfs(vector<vector<char>>& board, const string& word, int r, int c, int i) {
        if (i==word.length()) {
            return true;
        }
        if (r<0 || c<0 || r>=board.size() || c>=board[0].size() || board[r][c] != word[i]){
            return false;
        } 
        
        char match = board[r][c];
        board[r][c]= '#';
        bool found = dfs(board,word, r+1, c, i+1) ||
                     dfs(board,word, r-1, c, i+1) ||
                     dfs(board,word, r, c+1, i+1) ||
                     dfs(board,word, r, c-1, i+1);
        
        board[r][c] = match;
        return found;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna