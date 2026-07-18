class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted= arr;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int> rankMap;
        int rank=1;
        for (int num : sorted){
            if(rankMap.find(num) == rankMap.end()){
                rankMap[num]=rank;
                rank++;
            }
        }
        vector<int> answer;
        answer.reserve(arr.size());
        for(int num:arr){
            answer.push_back(rankMap[num]);
        }
        return answer;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna