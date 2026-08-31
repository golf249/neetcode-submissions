class Solution {
   public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (k == 0) return false;
        std::unordered_set<int> window;
        for (int i = 0; i < (int)nums.size(); ++i) {
            if (window.find(nums[i]) != window.end()) return true;
            window.insert(nums[i]);
            if ((int)window.size() > k) {
                window.erase(nums[i - k]);
            }
        }
        return false;
    }
};