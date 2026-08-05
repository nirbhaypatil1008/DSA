class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    vector<string> ans;
    unordered_map<char , int> mp;
    string r1 ="qwertyuiop";
    string r2 ="asdfghjkl";
    string r3 ="zxcvbnm";

    for(char ch : r1)
    mp[ch]=1;

    for(char ch : r2)
    mp[ch]=2;

    for(char ch : r3)
    mp[ch]=3;

    for(int i=0; i<words.size(); i++){
        string word = words[i];
        int val = mp[tolower(word[0])];
        bool valid = true;
        for(int j=0; j<words[i].size(); j++){
        char ch = tolower(word[j]);
         if( mp[ch] != val){
            valid = false; 
            break;
         }
         
        }
        if(valid)  {
            ans.push_back(words[i]);
         }
    }
    return ans;
    }
};