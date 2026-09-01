class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> uSet;

        for (const int& num : nums) {
            if (uSet.find(num) != uSet.end()) return true;
            uSet.insert(num);
        }

        return false;
    }
};