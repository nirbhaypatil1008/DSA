class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++)   {
        if( nums[i]%2 != 0){
            int j=i;
            while( j<nums.size()){
                if( nums[j]%2 != 0)
                j++;
                else{
                    swap(nums[i],nums[j]);
                    break;
                }
            }
        
        }
    }
    return nums;
    }
};