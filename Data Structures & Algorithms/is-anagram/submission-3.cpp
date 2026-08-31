class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::unordered_map<char, int> um1;
        std::unordered_map<char, int> um2;

        for (int i{}; i < s.length(); i++) {
            um1[s[i]]++;
            um2[t[i]]++;
        }
        return um1 == um2;
    }
};
