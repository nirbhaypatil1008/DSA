class Solution {
public:
    int maxNumberOfBalloons(string text) {
    unordered_map<char,int> map;

    for(int i=0; i<text.size(); i++)    {
        map[text[i]]+=1;;
    }

    int ans =min({map['b'],map['a'],map['n'],map['l']/2,map['o']/2});
    return ans;
    }
};