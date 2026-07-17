class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int happy = 0;
        for (int i = 0; i< s.size(); i++) {
            if (happy >= g.size()) {
                break;
            }            
            if (s[i] >= g[happy]) {
                happy++; 
            }
        }
        
        return happy;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna