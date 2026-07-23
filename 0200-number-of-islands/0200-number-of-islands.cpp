class Solution {
public:
    void  islandCount(vector<vector<char>>& grid, int i, int j){
        int n=grid.size();
        int m=grid[0].size();
        if (i<0 || i>=n || j<0 || j>=m || grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        islandCount(grid,i+1,j);
        islandCount(grid,i-1,j);
        islandCount(grid,i,j+1);
        islandCount(grid,i,j-1);
    }

    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()){
            return 0;
        }
        int n=grid.size();
        int m=grid[0].size();
        int islands=0;
        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (grid[i][j] =='1'){
                    islands++;
                    islandCount(grid,i,j);
                }
            }
        }
        return islands;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna