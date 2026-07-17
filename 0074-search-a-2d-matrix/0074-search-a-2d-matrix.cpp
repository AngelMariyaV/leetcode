class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false; 
        }      
        int m = matrix.size();
        int n = matrix[0].size();        
        int l= 0;
        int r= m*n-1;       
        while (l<= r) {
            int mid=l+(r-l)/2;
            int mid_val= matrix[mid/n][mid % n];           
            if (mid_val==target) {
                return true;
            } else if (mid_val<target) {
                l= mid+1;
            } else {
                r=mid-1; 
            }
        }      
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna