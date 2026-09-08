class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int dist = INT_MAX, n=0;
    for(int num : nums){
        if( abs(num) < dist ){
            dist = abs(num);
            n = num;
        }
        if( abs(num) == dist){
            if( n < num ) n = num; 
        }
    }
    return n;
    }
};