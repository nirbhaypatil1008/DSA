class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
    vector<int> ans(highLimit+1,0);
    for(int i=lowLimit; i<=highLimit; i++){
        int temp = i;
        int sum = 0;
        while( temp>0 ){
            sum+=temp%10;
            temp/=10;
        }
        ans[sum]++;
    }
    int max_n = INT_MIN;
    for(int i=0; i<ans.size(); i++){
     max_n = max( max_n,ans[i]);
    }
    return max_n; 
    }
};