class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1{0};
        int p2{numbers.size()-1};
        int n = numbers.size();
        vector<int> ans(2,0);

        while (p1 < p2) {
            int sum = numbers[p2] + numbers[p1];
            if (sum > target) {
                p2--;
            } else if (sum < target) {
                p1++;
            } else {
                ans[0] = p1+1;
                ans[1] = p2+1;
                break;
            }  
        }

        return ans;
    }
};
