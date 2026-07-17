class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        int pre = 1;
        for(int i = 0; i < n; i++){
            res[i] = pre;
            pre *= nums[i];
        }

        int suf = 1;
        for(int i = n - 1; i >= 0; i--){
            res[i] *= suf;
            suf *= nums[i];
        }

        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna