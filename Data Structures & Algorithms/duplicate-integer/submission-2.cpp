class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> us;

        for (auto num : nums) {
            if (us.count(num)) {
                return true;
            }
            us.insert(num);
        }
        return false;
    }
};