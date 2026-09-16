class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string comp = strs[0];
    string ans  ="";
    for(int i=1; i<strs.size(); i++){
        string ans ="";
    for(int j=0; j<strs[i].length(); j++){
        string temp = strs[i];
        if( comp[j] == temp[j]){
            ans+=comp[j];
        }
        else break;
    }
    comp = ans;
    }
return comp;
    }
};