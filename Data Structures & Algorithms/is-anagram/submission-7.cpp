class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> charCountS;
        unordered_map<char,int> charCountT;
        int n = (std::max(s.size(),t.size()));

        for (auto i{0uz}; i < n; i++) {
            if (s[i]) charCountS[s[i]]++;     
            if (t[i]) charCountT[t[i]]++;
        }

        if (charCountS != charCountT) return false;

        return true;
    }
};
