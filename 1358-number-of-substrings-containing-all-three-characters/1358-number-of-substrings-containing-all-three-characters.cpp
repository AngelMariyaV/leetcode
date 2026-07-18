class Solution {
public:
    int numberOfSubstrings(string s) {
        int abc[3] = {-1, -1, -1};
        int count = 0, right = 0;
        while (right < s.length()) {
            abc[s[right] - 'a'] = right;
            int minIndex = INT_MAX;
            for (int i = 0; i < 3; i++) {
                minIndex = min(minIndex, abc[i]);
            }
            count += (minIndex + 1);
            right++;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna