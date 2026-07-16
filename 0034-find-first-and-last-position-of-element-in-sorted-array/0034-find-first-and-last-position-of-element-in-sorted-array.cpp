class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l= -1, r= -1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==target){
                l=i;
                break;
            }
        }
        for (int j=nums.size() -1 ;j>=0;j--){
            if (nums[j]==target){
                r=j;
                break;
            }
        }
        return {l,r};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna