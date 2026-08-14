class Solution {
public:
    int maximumLengthSubstring(string s) {
    unordered_map<int,int> map;
    int left = 0 , ans =0;
    for(int right = 0; right<s.length(); right++){
        map[s[right]]++;
        
        while( map[s[right]] > 2 ){
            map[s[left]]--;
            left++;
         }
         ans = max(ans,right-left+1);
        
    }
    return ans;
    }
};