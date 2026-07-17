class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> final;
        for (int i=0;i<nums1.size();i++){
            int val= -1;
            for (int j=0;j<nums2.size();j++){
                if (nums1[i]==nums2[j]){
                    for (int k=j+1;k<nums2.size();k++){
                        if (nums2[j]<nums2[k]){
                            val=nums2[k];
                            break;
                        }
                    }
                    break;
                    
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