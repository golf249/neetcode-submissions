class Solution {
public:

    string encode(vector<string>& strs) {
        std::string str{};

        for (const auto& s : strs) {
            str += std::to_string(s.size()) + "#" + s; 
        }
        return str;
    }

    vector<string> decode(const string& s) {
        std::vector<string> result{};
        int index{};
        int n = s.size();
        std::string charCount{};

        while (index < n) {
            if (s[index] != '#') {
                charCount += s[index];
                index++;
            } else {
                int count = std::stoi(charCount);
                std::string word{};
                for (auto i{1}; i <= count; i++) {
                    word += s[index+i];
                }
                result.push_back(word);
                index += count+1;
                charCount = "";
            }
        }

        return result;
    }
};
