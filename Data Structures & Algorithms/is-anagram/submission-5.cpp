class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int> uMap1;
        std::unordered_map<char,int> uMap2;
        int n = max(s.size(), t.size());

        for (auto i = 0; i < n; i++) {
            uMap1[s[i]]++;
            uMap2[t[i]]++;
        }

        if (uMap1 == uMap2) return true;

        return false;
    }
};
