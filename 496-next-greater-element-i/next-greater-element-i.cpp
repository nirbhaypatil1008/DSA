class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    unordered_map<int,int> map;
    vector<int> ans;
    for(int x : nums2){
        while(!st.empty() && st.top() <= x){
            map[st.top()]=x;
            st.pop();
        }
        st.push(x);
    }
    while(!st.empty()){
        map[st.top()]=-1; 
        st.pop();   
    }
    for(int x : nums1){
        if( map.find(x) != map.end()){
            ans.push_back(map[x]);
        }
    }
    return ans;
    }
};