class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> us;

        for (auto num : nums) {
            if (us.contains(num)) {
                return true;
            }
            us.insert(num);
        }
        return false;
    }
};