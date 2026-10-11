class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        if( n == 0)return 0;
        int ans = 0;
        for(int i=0; i<n; i++){
        if( n % (i+1) == 0){
            int num = nums[i];
            ans+=(num*num);
        }
    }
    return ans;
    }
};