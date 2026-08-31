class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int beginP = 0;
        int endP = n-1;
        int midP;
        bool end = false;

        while (beginP <= endP) {
            midP = beginP + (endP - beginP) / 2;

            if (nums[midP] < target) {
                beginP = midP+1;
            } else if (nums[midP] > target) {
                endP = midP-1;
            } else if (nums[midP] == target) {
                return midP;
            } else {
                
            }
        }
        return beginP;
    }
};