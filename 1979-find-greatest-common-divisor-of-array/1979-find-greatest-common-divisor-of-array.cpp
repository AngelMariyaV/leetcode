class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s=nums[0];
        int l=nums[0];
        for (int i=1;i<nums.size();i++){
            if (nums[i]<s){
                s=nums[i];
            }
            if (nums[i]>l){
                l=nums[i];
            }
        }
        int gcd=1;
        for (int j=s;j>1;j--){
            if (s%j==0 && l%j==0){
                gcd=j;
                break;
            }
        }
        return gcd;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna