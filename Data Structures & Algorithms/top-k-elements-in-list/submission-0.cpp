class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> count;
        int n = nums.size();
        vector<vector<int>> buckets(n + 1);
        vector<int> ans{};

        for (auto num : nums) {
            count[num]++;
        }

        for (const auto& [num, freq] : count) {
            buckets[freq].push_back(num);
        }

        for (int i = n; i >=0 && ans.size() < k; i--) {
            for (auto num : buckets[i]) {    // we start from the largest frequency
                ans.push_back(num);
                if (ans.size() == k) break;
            }
        }
        
        return ans;
    }
};
