class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
    unordered_map<int,int> frq;
    int l = 0;
    for(int r = k-1; r < nums.size(); r++  ){
        unordered_set<int> seen;
        for(int temp = l; temp<=r; temp++){
            seen.insert(nums[temp]);
        }
        for(int num : seen){
            frq[num]++;
        }
        l++;
    }
    int ans  = -1;
    for(auto [num,count] : frq){
        if( count == 1){
            ans = max( ans , num );
        }
    }
    return ans;
    }
};