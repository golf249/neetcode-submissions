class Solution {
public:
    int majorityElement(vector<int>& nums) {
       std::unordered_map<int, int> counts;
       int maxCount = 0;
       int maxNum;

       for (const auto& num : nums) {
            if (!counts.contains(num)) {
                counts.insert({num, 1});
            } else {
                counts[num]++;
            }
       }

       for (const auto& [key, value] : counts) {
            if (value > maxCount) {
                maxNum = key;
                maxCount = value;
            }
       }

       return maxNum;
    }
};