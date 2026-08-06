class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
    unordered_map<int,int> mp;
    bool result = true;
    for(int num : target)     
        mp[num]++;

    for(int num : arr){
        if( mp.find(num) != mp.end()){
          if(mp[num] <= 0 ) {
            result = false;
            break; 
          }
          
          mp[num]--;
        }
        else{
            result = false;
            break;
        }
    }
    return result;
    }
};