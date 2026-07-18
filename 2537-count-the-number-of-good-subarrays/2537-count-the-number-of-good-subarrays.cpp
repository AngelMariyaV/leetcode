class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long ans = 0;
        long long pairs = 0;
        int left = 0;
        int n = nums.size();

        for (int right=0; right<n; right++){
            pairs += freq[nums[right]];
            freq[nums[right]]++;

            while (pairs>=k){
                ans += (n - right);
                freq[nums[left]]--;
                pairs -=freq[nums[left]];
                left++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna