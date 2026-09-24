class Solution {
    public int maxNumberOfBalloons(String text) {
        HashMap<Character, Integer> map = new HashMap<>();
        char arr[] = {'b', 'a', 'l', 'o', 'n'};
        int times[] = {1, 1, 2, 2, 1};
        
        
        for (char c : arr) {
            map.put(c, 0);
        }
        
       
        for (int i = 0; i < text.length(); i++) {
            char ch = text.charAt(i);
            if (isRequiredChar(ch)) {
                map.put(ch, map.get(ch) + 1);
            }
        }
        
        
        for (int i = 0; i < arr.length; i++) {
            char c = arr[i];
            int t = times[i];
            map.put(c, map.get(c) / t);
        }
        
        
        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < arr.length; i++) {
            char c = arr[i];
            ans = Math.min(ans, map.get(c));
        }
        
        return ans;
    }
    
    public Boolean isRequiredChar(char ch) {
        return (ch == 'b' || ch == 'a' || ch == 'l' || ch == 'o' || ch == 'n');
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna