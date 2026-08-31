class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> uMap;

        for (auto i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int diff = target - num;
            cout << "num: " << num << "   diff: " << diff << "    i: " << i << endl;
            if (uMap.contains(diff)) return {uMap[diff], i};

            uMap[num] = i;
        }

    }
};
