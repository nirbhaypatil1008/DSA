class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> prefixmax(n);
        vector<int> prefixmin(n);
        int max_ = INT_MIN;

        for (int i = 0; i < n; i++) {
            max_ = max(max_, nums[i]);
            prefixmax[i] = max_;
        }
        int min_ = INT_MAX;

        for (int i = n - 1; i >= 0; i--) {
            min_ = min(min_, nums[i]);
            prefixmin[i] = min_;
        }
        for (int i = 0; i < n; i++) {
            if (prefixmax[i] - prefixmin[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};