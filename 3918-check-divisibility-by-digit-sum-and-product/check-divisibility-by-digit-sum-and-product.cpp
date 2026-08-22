class Solution {
public:
    bool checkDivisibility(int n) {
    int ans = n;
    int sum_ans = 0; 
    long mul_ans = 1;
    while( ans != 0 ){
        int num = ans%10;
        sum_ans+=num;
        mul_ans*=num;
        ans=ans/10;
    }
    return n%(sum_ans + mul_ans) == 0;
    }
};