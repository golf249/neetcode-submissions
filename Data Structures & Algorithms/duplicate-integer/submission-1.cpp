class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> us;

        for (auto num : nums) {
            if (us.find(num) != us.end()) {
                return true;
            } else {
                us.insert(num);
            }
        }
        return false;
    }
};