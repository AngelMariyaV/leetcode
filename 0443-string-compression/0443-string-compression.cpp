class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0, read = 0;
        
        while (read < chars.size()) {
            char currChar = chars[read];
            int count = 0;
            
            while (read < chars.size() && chars[read] == currChar) {
                read++;
                count++;
            }
            
            chars[write++] = currChar;
            
            if (count > 1) {
                for (char c : to_string(count)) {
                    chars[write++] = c;
                }
            }
        }
        
        return write;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna