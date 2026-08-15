class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
    int xr = 0;
    for(int num : nums)    
    xr ^= num;

    if(xr  != 0)
    return nums.size();

    for( int num : nums){
        if( num !=0)
        return nums.size()-1;
    }
    return 0;
    }
};