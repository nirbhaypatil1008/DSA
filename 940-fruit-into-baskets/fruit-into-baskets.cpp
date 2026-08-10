class Solution {
public:
    int totalFruit(vector<int>& nums) {
    unordered_map<int,int> freq;
    int n = nums.size();
    int left = 0;
    int max_tree = 0;
    for( int right = 0; right < n; right++){
        freq[nums[right]]++;
        if( freq.size() <= 2){
        max_tree = max(max_tree,right-left+1);
        }
        if( freq.size() > 2 ){
            while(freq.size() > 2){
                freq[nums[left]]--;
                if(freq[nums[left]] == 0)
                freq.erase(nums[left]);
                
                left++;
            }
            
        }
    }
    return max_tree;
    }
};