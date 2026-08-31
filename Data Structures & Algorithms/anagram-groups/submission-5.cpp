class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<string>> result;
        std::unordered_map<std::string, std::vector<string>> uMap;
        
        for (auto const& word : strs) {
            std::vector<int> count(26,0);
            for (auto c : word) {
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for (int i = 1; i < 26; i++) {
                key += ',' + std::to_string(count[i]);
            }
            uMap[key].push_back(word);
        }

        for (auto const& [key, val] : uMap) {
            result.push_back(val);
        }

        return result;
    }
};
