class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> sumMap;
        sumMap[0]=-1;
        int maxLen=0;
        int currentSum = 0;       
        for (int i=0; i<nums.size(); ++i) {
            currentSum += (nums[i]==1) ? 1 : -1;
            if (sumMap.count(currentSum)) {
                maxLen=max(maxLen, i-sumMap[currentSum]);
            } else {
                sumMap[currentSum]=i;
            }
        }
        return maxLen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna