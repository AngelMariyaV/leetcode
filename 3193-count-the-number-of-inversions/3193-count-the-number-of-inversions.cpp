class Solution {
public:
    int numberOfPermutations(int n, vector<vector<int>>& requirements) {
        int MOD = 1e9 + 7;
        vector<int> req(n, -1);
        int max_cnt = 0;
        for (const auto& r : requirements) {
            req[r[0]] = r[1];
            max_cnt = max(max_cnt, r[1]);
        }
        if (req[0] > 0) return 0;
        vector<long long> dp(max_cnt + 1, 0);
        dp[0] = 1;
        for (int i = 2; i <= n; ++i) {
            vector<long long> next_dp(max_cnt + 1, 0);
            for (int j = 0; j <= max_cnt; ++j) {
                for (int k = 0; k < i && j - k >= 0; ++k) {
                    next_dp[j] = (next_dp[j] + dp[j - k]) % MOD;
                }
            }
            if (req[i - 1] != -1) {
                int target = req[i - 1];
                for (int j = 0; j <= max_cnt; ++j) {
                    if (j != target) {
                        next_dp[j] = 0; 
                    }
                }
            }
            dp = move(next_dp);
        }
        return dp[req[n - 1]];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna