class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        if (grid[0][0] != 0){
            return false;
        }
        vector<pair<int, int>>pos(n*n);
        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                pos[grid[i][j]]={i,j};
            }
        }
        for (int k=1;k<n*n;++k) {
            int dr= abs(pos[k].first-pos[k-1].first);
            int dc= abs(pos[k].second-pos[k-1].second);
            if (dr*dc!=2) {
                return false;
            }
        }
        
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna