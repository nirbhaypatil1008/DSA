class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
    int p1 = 0;
    int p2 = 0;
    int ans = 0;
    for(int i=2; i<=cost.size(); i++){
        ans = min(p2+cost[i-1] , p1+cost[i-2]);
        p1=p2;
        p2=ans;
    }
    return ans;
    }
};