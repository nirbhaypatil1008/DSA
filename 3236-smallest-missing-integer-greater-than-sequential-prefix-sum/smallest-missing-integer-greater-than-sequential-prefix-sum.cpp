class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0] + 1;
        unordered_set<int> st;
        int ans;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        int i;
        int sum = nums[0];
        for (i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }

        while (st.find(sum) != st.end()) {
            sum++;
        }
        return sum;
    }
};