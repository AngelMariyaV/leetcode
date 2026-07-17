class Solution {
public:
    int sol(int idx, vector<int>& nums, int sum, int target){
        if(idx==nums.size()){
            if(sum==target){
                return 1;
            }
            return 0;
        }
    
        int plus=sol(idx+1, nums, sum+nums[idx], target);
        int minus=sol(idx+1, nums, sum-nums[idx], target);
        return plus+minus;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return sol(0, nums, 0, target);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna