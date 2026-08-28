class Solution {
public:
    int maxDistinct(string s) {
    int freq[26]={0};
    int count = 0;
    for(char c : s){
        freq[ c - 'a']++;
    }
    for(char c = 'a'; c<='z'; c++){
        if( freq[c-'a'] >0) count++;
    }
    return count;
    }
};