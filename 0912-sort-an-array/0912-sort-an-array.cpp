class Solution {
public:
    void merge(vector<int>& nums,int start, int mid, int end){
        vector<int> temp(end - start + 1);
        int i = start;    
        int j = mid + 1;  
        int k = 0;
        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }
        while (i <= mid) {
            temp[k++] = nums[i++];
        }
        while (j <= end) {
            temp[k++] = nums[j++];
        }        
        for (int p = 0; p < temp.size(); p++) {
            nums[start + p] = temp[p];
        }
    }
    void mergesort(vector<int>& nums,int start, int end) {
        if(start>=end){
            return ;
        }
        int mid= start+(end-start)/2;
        mergesort(nums,start,mid);
        mergesort(nums,mid+1,end);
        merge(nums,start,mid,end);

    }
    vector<int> sortArray(vector<int>& nums){
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna