class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combo;
        solve(0, target, candidates, combo, ans);
        return ans;
    }
private:
    void solve(int i, int target, vector<int>& candidates, vector<int>& combo, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(combo);
            return;
        }
        if (i == candidates.size() || target < 0) {
            return;
        }
        combo.push_back(candidates[i]);
        solve(i, target - candidates[i], candidates, combo, ans);
        combo.pop_back();        
        solve(i + 1, target, candidates, combo, ans);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna