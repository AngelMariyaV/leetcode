class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        string w;
        stringstream iss(s);
        while (iss>> w){
            v.push_back(w);
        }
        set<string> S;
        if (pattern.size() != v.size()){
            return false;
        }
        unordered_map<char, string>m;
        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            if (m.find(ch) != m.end()) {
                if (m[ch] != v[i]){
                    return false;
                }
            } else {
                if (S.count(v[i]) > 0){
                    return false;
                }
                m[ch] = v[i];
                S.insert(v[i]);
            }
        }
        return true;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna