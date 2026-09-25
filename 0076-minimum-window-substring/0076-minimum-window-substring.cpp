class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";

        vector<int> need(128, 0);
        for (char c : t) {
            need[c]++;
        }

        int required = t.size();
        int left = 0, bestStart = 0, bestLen = INT_MAX;

        for (int right = 0; right < s.size(); right++) {
          
            if (need[s[right]] > 0) {
                required--;
            }
            need[s[right]]--; 
            while (required == 0) {
                if (right - left + 1 < bestLen) {
                    bestLen = right - left + 1;
                    bestStart = left;
                }

                need[s[left]]++;
                if (need[s[left]] > 0) {
                    required++; 
                }
                left++;
            }
        }

        return bestLen == INT_MAX ? "" : s.substr(bestStart, bestLen);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna