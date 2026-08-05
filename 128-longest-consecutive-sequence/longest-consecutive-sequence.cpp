class Solution {
public:
    int max_freq = 0;
    int  freq ;
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> st;
    for(int i=0; i<nums.size(); i++){
        st.insert(nums[i]);
    }

    for(int num : st){
     if(st.find(num-1) == st.end()){
     freq = 0; 
     while(st.find(num) != st.end()){
        freq++;
        num++;
     }
     max_freq=max(max_freq,freq) ;
   
     }

    }
    return max_freq;
    }
};