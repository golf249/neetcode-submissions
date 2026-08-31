class Solution {
public:
    bool isValid(string s) {
        std::stack<char> brackets{};

        for (auto b : s) {
            if (b == ']') {
                if (brackets.empty()) return false;
                if (brackets.top() != '[') {
                    return false;
                } else {
                    brackets.pop();
                    continue;
                }
            } 
            if (b == ')') {
                if (brackets.empty()) return false;
                if (brackets.top() != '(') {
                    return false;
                } else {
                    brackets.pop();
                    continue;
                }
            }
            if (b == '}') {
                if (brackets.empty()) return false;
                if (brackets.top() != '{') {
                    return false;
                } else {
                    brackets.pop();
                    continue;
                }
            }
            brackets.push(b);
        }
        return brackets.empty();
    }
};
