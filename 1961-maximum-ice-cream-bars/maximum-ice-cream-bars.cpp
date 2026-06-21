class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
    int mx = *max_element(costs.begin(),costs.end());
    vector<int> freq(mx+1,0);

    for(int i=0; i<costs.size(); i++){
        freq[costs[i]]++;
    }
    vector<int> ans;
    for(int i=0; i<=mx; i++){
        while(freq[i]>0){
            ans.push_back(i); 
            freq[i]--;
        }
    }
    int ice=0;
    for(int i=0; i<ans.size(); i++){
        if(coins>=ans[i]){
            coins-=ans[i];
            ice++;
        }else{
            break;
        }
    }
    return ice;
    }
};