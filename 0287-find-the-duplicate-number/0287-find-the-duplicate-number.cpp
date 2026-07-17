class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return num;
            }
            seen.insert(num);
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna