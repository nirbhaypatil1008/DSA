class Solution {
public:
    int minSumOfLengths(vector<int>& nums, int target) {
        vector<int> prefix(nums.size(), INT_MAX);
        int sum = 0;
        int j = 0;
        int min_ = INT_MAX;
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            while (sum > target) {
                sum -= nums[j];
                j++;
            }

            if (sum == target) {
                int len = i - j + 1;

                if (j > 0 && prefix[j - 1] != INT_MAX)
                    ans = min(ans, len + prefix[j - 1]);

                min_ = min(min_, len);
            }

            prefix[i] = min_;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};