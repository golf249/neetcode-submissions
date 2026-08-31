class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<string>> result;
        std::unordered_map<string, std::vector<string>> uMap;

        for (auto word : strs) {
            string key = word;
            sort(key.begin(), key.end());
            uMap[key].push_back(word);
        }

        for (auto const& [key, val] : uMap) {
            result.push_back(val);
        }

        return result;
    }
};
