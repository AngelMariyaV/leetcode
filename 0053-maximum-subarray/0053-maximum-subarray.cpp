class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=nums[0];
        int sum=0;

        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            if (sum>max){
                max=sum;
            }
            if (sum<0){
                sum=0;
            }
        }
        return max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna