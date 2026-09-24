class Solution {
public:
    int smallestIndex(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++)  {
        int val = nums[i];
        int sum =0;
        if( val == 10){
            sum =1;
        }else{
            while( val != 0){
            sum+=(val%10);
            val/=10;
        }
        }
        if( nums[i] == 10 && i == sum)
        return 1;
        if( sum == i)
        return i;

    }
    return -1;
    }
};