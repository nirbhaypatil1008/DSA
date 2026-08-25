class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    unordered_set<int> set;
    for(int num : nums){
        set.insert(num);
    }
    int n = k;
    while( set.find(n) != set.end()){
        n+=k;
    }
    return n;
    }
};