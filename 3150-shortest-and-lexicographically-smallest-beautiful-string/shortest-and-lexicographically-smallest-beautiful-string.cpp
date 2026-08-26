class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string t_ans;
        int k_len = 0;
        int i = 0;

        while (i < s.size() && s[i] == '0')
            i++;

        int j = i;

        while (i < s.size() && k_len < k) {
            if (s[i] == '1')
                k_len++;

            t_ans += s[i];
            i++;
        }

        if (k_len < k)
            return "";

        for (int left = i; left < s.size(); left++) {
            if (s[left] == '1') {
                k_len++;

                while (s[j] != '1')
                    j++;

                j++;

                while (j < left && s[j] == '0')
                    j++;

                k_len--;

                string temp = s.substr(j, left - j + 1);

                if (temp.size() < t_ans.size() ||
                    (temp.size() == t_ans.size() && temp < t_ans)) {
                    t_ans = temp;
                }
            }
        }

        return t_ans;
    }
};