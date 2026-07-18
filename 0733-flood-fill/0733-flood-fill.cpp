class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int og_clr, int n_clr){
        if (r < 0 || r >= image.size() || c < 0 || c >= image[0].size() || image[r][c] != og_clr) {
            return;
        }
        image[r][c] =n_clr;
        dfs(image, r + 1, c, og_clr, n_clr);
        dfs(image, r - 1, c, og_clr, n_clr);
        dfs(image, r, c+1, og_clr, n_clr);
        dfs(image, r, c-1, og_clr, n_clr);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int og_clr= image[sr][sc];
        if (og_clr != color) {
            dfs(image, sr, sc, og_clr, color);
        }
        
        return image;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna