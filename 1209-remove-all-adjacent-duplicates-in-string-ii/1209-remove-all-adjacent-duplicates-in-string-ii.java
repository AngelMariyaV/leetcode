class Solution {
    public String removeDuplicates(String s, int k) {
        ArrayDeque<Pair> stack = new ArrayDeque<>();
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (!stack.isEmpty()) {
                Pair pair = stack.peek();
                if (pair.ch == ch) {
                    if (pair.pos == k - 1) {
                        for (int j = 1; j < k; j++) {
                            stack.pop();
                        }
                    } else {
                        stack.push(new Pair(ch, pair.pos + 1));
                    }
                } else {
                    stack.push(new Pair(ch, 1));
                }
            } else {
                stack.push(new Pair(ch, 1));
            }
        }

        StringBuilder sb = new StringBuilder();
        while (!stack.isEmpty()) {
            sb.append(stack.pop().ch);
        }
        
        return sb.reverse().toString(); 
    }

    static class Pair {
        char ch;
        int pos;
        Pair(char ch, int pos) {
            this.ch = ch;
            this.pos = pos;
        }
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna