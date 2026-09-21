class NumArray {
public:
    vector<int> preFix;
    NumArray(vector<int>& nums) {
    preFix.push_back(nums[0]);
    for(int i=1; i<nums.size(); i++){
        preFix.push_back(nums[i]+preFix[i-1]);
    }
    }
    
    int sumRange(int left, int right) {
        if( left == 0)
        return preFix[right];
        
      return preFix[right] - preFix[left -1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */