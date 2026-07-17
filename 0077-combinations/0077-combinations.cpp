class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> combination(k);
        generateC(1,n,k,combination,result);
        return result;
    }

private:
    void generateC(int start,int n,int k,vector<int> &combination,vector<vector<int>> &result) {
        if (k==0) {
            result.push_back(combination);
            return;
        }
        for (int i=start; i<=n; ++i) {
            combination[combination.size()-k]=i;
            generateC(i+1, n, k-1,combination,result);
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna