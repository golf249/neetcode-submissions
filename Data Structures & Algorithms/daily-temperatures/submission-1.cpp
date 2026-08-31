class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(),0);
        std::stack<pair<int,int>> s;

        for (int i{}; i < temperatures.size(); i++) {
            int t = temperatures[i];
            while (!s.empty() && t > s.top().first) {
                auto p = s.top();
                s.pop();
                result[p.second] = i - p.second;
            }
            s.push({t,i});
        }

        return result;
    }
};
