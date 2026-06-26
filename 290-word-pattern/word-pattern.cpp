class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        unordered_map<string, char> rev;
        int j = 0;
        
        for (int i = 0; i < pattern.size(); i++) {
            if (j >= s.size())
                return false;
            string temp = "";
            while (j < s.size() && s[j] != ' ') {
                temp += s[j];
                j++;
            }
            if (j < s.size())
                j++;
            if(mp.count(pattern[i])){
                if(mp[pattern[i]] != temp)
                    return false;
            }
            else{
                mp[pattern[i]] = temp;
            }
            if(rev.count(temp)){
                if(rev[temp] != pattern[i])
                    return false;
            }
            else{
                rev[temp] = pattern[i];
            }
        }
        return j == s.size();
    }
};