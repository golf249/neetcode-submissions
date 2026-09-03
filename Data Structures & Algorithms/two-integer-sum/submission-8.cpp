class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> uMap;
        int n = nums.size();

        for (int i{}; i < n; i++) {
            int diff = target - nums[i];
            if (uMap.contains(diff)) return {uMap[diff], i};
            uMap[nums[i]] = i; 
        }
    }
};
