class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int n = nums.size();
        vector<int> prefix(n);
        vector<int> postfix(n);
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++) {
            prefix[i] = nums[i] + prefix[i - 1];
        }
        postfix[n - 1] = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            postfix[i] = nums[i] + postfix[i + 1];
        }
        int ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(prefix[i] == x) {
                ans = min(ans, i + 1);
            }
        }
        for(int j = 0; j < n; j++) {
            if(postfix[j] == x) {
                ans = min(ans, n - j);
            }
        }
        unordered_map<int, int> mp;

        for(int j = 0; j < n; j++) {
            mp[postfix[j]] = j;
        }
        for(int i = 0; i < n; i++) {
            int req = x - prefix[i];
            if(req <= 0)
                continue;
            if(mp.find(req) != mp.end()) {
                int j = mp[req];
                if(j > i) {
                    int left = i + 1;
                    int right = n - j;
                    ans = min(ans, left + right);
                }
            }
        }
        if(ans == INT_MAX)
            return -1;
        return ans;
    }
};