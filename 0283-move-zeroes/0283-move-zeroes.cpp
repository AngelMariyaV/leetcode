class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos=0;
        int n=nums.size();
        for (int i=0;i<n;i++){
            if (nums[i]!=0){
                nums[pos]= nums[i];
                pos++;
            }
        }
        while (pos<n){
            nums[pos]=0;
            pos++;
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna