class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans;
        for (int i = n; i <= 100; i++) {
            int num = i;
            int product = 1;
            while (num > 0) {
                int degit = num % 10;
                product *= degit;
                num /= 10;
            }
            if (product % t == 0){
                ans = i;
                break;
            }
            
        }
        return ans; 
    }
};