class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l{};
        int max_length{};
        std::unordered_set<char> char_set;

        for (int r{}; r < s.size(); ++r) {
            while (char_set.contains(s[r])) {
                char_set.erase(s[l]);
                l++;
            }

            char_set.insert(s[r]);
            max_length = std::max(max_length, r-l+1);
        } 

        return max_length;
    }
};
