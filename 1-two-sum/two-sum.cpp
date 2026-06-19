class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
     unordered_map<int,int> map;
     for( int i=0; i<n; i++){
        int val = target-nums[i];
        if(map.find(val)!=map.end()){
            return {map[val],i};
        }
        else{
            map[nums[i]]=i;
        }
     }
    return {};
    }
};