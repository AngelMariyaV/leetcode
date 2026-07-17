class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s.size()!=t.size()){
            return false;
        }else{
            for(int i = 0; i < s.size(); i++) {
                if(s[i] != t[i]) {
                    return false; 
                }
            }
            return true;
        }
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna