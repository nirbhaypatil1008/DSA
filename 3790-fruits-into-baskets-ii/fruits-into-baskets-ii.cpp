class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int error = 0;
       
    for(int left=0; left<fruits.size(); left++){
         bool set = false;
        for(int right=0; right<fruits.size(); right++){
            if( fruits[left] <= baskets[right]){
                baskets[right]=0;
                set = true;
                break;
            }
            
        }
        if(!set) error++;
    }
    return error;
    }
};