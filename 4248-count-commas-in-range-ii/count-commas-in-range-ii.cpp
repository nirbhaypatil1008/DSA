class Solution {
public:
    long long countCommas(long long n) {
      if( n < 999)return 0;
      long long ans = 0;
      long long x = 1000;
      while( n > 0){
        ans += n-x+1;

        if( x > n/1000)
        break;

        x*=1000;
      }
      return ans;
    }
};