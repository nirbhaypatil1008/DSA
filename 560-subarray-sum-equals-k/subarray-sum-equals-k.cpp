class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0;
        mp[0] = 1;
        int ans = 0;
        for (int num : nums) {
            sum += num;
            int needed = sum -k;
            if (mp.find(needed) != mp.end()) {
                ans+=mp[needed];
            }
            mp[sum]++;
        }
        return ans;
    }
};