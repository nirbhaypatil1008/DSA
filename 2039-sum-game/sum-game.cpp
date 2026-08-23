class Solution {
public:
    bool sumGame(string num) {
    int leftsum = 0 ,rightsum=0;
    int leftq = 0, rightq = 0;
    int n = num.size();

    for(int i=0; i<n/2; i++)    {
        if( num[i] == '?')
        leftq++;
        else
        leftsum+= num[i]-'0';
    }

    for( int i=n/2; i<n; i++){
        if(num[i] == '?')
        rightq++;
        else
        rightsum+= num[i]-'0';
    }
    int dif = leftsum - rightsum;
    int qdiff = leftq - rightq;

    if( qdiff % 2 != 0)
    return true;
    else return dif != -9*(qdiff/2);
    
    }
};