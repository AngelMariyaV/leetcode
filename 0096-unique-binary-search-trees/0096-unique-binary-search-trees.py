class Solution(object):
    def numTrees(self, n):
        ans = 1

        for i in range(n):
            ans = ans * (2 * n - i)//(i + 1)

        return ans // (n + 1)
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna