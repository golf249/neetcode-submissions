class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> charCountS;
        unordered_map<char, int> charCountT;

        for (auto i{0uz}; i < s.size(); i++) {
            charCountS[s[i]]++;
            charCountT[t[i]]++;
        }

        return charCountS == charCountT;
    }
};
