class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int j=0;
    int max_len = INT_MIN;
    int limit = k;
    for(int i=0; i<nums.size(); i++){
        
        if( nums[i] != 1 && k > 0){
            k--;
        }
        else if( nums[i] != 1 && k <= 0){
            while( nums[j] != 0 ){
                if(nums[j] == 0){
                    break;
                }
                j++;
            }
            j++;
        }
        max_len = max(max_len,i-j+1);
    }
    return max_len;
    }
};