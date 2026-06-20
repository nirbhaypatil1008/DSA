class Solution {
public:
    int search(vector<int>& nums, int target) {
    int min_n = INT_MAX;
    int ans = -1, index;
    for( int i=0; i<nums.size(); i++){
       if(  nums[i] < min_n){
        min_n = nums[i];
        index = i;
       }
    }
    int left = 0, right = index-1;
   if(left <= right){
        while( left <= right){
           int mid = (left+right)/2;
            if(target == nums[mid]){
              return mid;
            } 
            else if( nums[mid]>target){
                right = mid -1;
            }
            else{
                left = mid+1;
            }
            
        }
    }
    left = index;
    right = nums.size()-1;
    while( left <= right){
      int  mid = (left+right)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if( nums[mid]>target){
                right = mid -1;
            }
            else{
                left = mid+1;
            }
    }

    return ans;
    }
};