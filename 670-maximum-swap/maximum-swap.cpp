
class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        for (int i = 0; i < s.size(); i++) {
         int idx = i;
            for (int j = i + 1; j < s.size(); j++) {
                if (s[j] >= s[idx]) {
                    idx = j;
                }
            }
            if (s[idx] > s[i]) {
                swap(s[i], s[idx]);
                return stoi(s);
            }
        }
        return num;
    }
};

