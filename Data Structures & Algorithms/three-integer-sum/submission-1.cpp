class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int l = 0; l < (int)nums.size() - 2; l++) {
            if (l > 0 && nums[l] == nums[l-1]) continue;
            int i = l + 1;
            int r = nums.size() - 1;
            while (i < r) {
                int sum = nums[l] + nums[r] + nums[i];
                if (sum == 0) {
                    result.push_back({nums[l], nums[i], nums[r]});
                    while (i < r && nums[i] == nums[i+1]) i++;
                    while (i < r && nums[r] == nums[r-1]) r--;
                    i++; r--;
                } else if (sum < 0) {
                    i++;
                } else {
                    r--;
                }
            }
        }

        return result;
    }
};