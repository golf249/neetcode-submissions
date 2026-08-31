class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        std::unordered_set sequence(nums.begin(), nums.end());
        int longestNum = 1;

        for (auto num : sequence) {
            if (sequence.find(num - 1) == sequence.end()) {
                int i = 1;
                int currLongest = 1;

                while (sequence.find(num + i) != sequence.end()) {
                    currLongest++;
                    i++;
                    longestNum = max(longestNum, currLongest);
                }
            }
        }
        
        return longestNum;
    }
};
