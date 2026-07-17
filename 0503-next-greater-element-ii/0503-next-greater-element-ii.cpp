class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> final;
        for (int i=0;i<nums.size();i++){
            int val= -1;
            bool found=false;
            for (int j=i+1;j<nums.size();j++){
                if (nums[i]<nums[j]){
                    val=nums[j];
                    found=true;
                    break;
                }
            }
            if (!found){
                for (int k=0;k<i;k++){
                    if (nums[i]<nums[k]){
                        val=nums[k];
                        break;
                    }
                }
            }
                
            final.push_back(val);
        }
        return final;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna