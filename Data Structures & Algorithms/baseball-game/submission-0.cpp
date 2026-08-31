class Solution {
    void print(vector<string>& ops) {
        for (auto op : ops) {
            cout << op << '\n';
        }
    }
public:
    int calPoints(vector<string>& operations) {
        int sums = 0;
        std::stack<int> s;
        
        for (const auto& ops : operations) {
            if (ops == "+") {
                int top = s.top(); s.pop();
                int newTop = top + s.top();
                s.push(top);
                s.push(newTop);
                sums += newTop;
            } else if (ops == "D") {
                int top = s.top();
                int dTop = top*2;
                s.push(dTop);
                sums += dTop;
            } else if (ops == "C") {
                int top = s.top();
                s.pop();
                sums -= top;
            } else {
                int num = stoi(ops);
                s.push(num);
                sums += num; 
            }
        }
        return sums;
    }
};