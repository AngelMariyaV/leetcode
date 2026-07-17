class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for (int i=0;i<numRows;i++){
            vector<int> row(i+1,1);
            for (int j=1;j<i;j++){
                row[j] = triangle[i-1][j-1] + triangle [i-1][j];
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna