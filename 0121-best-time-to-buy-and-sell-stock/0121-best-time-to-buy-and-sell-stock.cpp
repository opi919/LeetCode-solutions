class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Max = INT_MIN;
        int min = INT_MAX;
        int result = 0;

        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min = prices[i];
                Max = prices[i];
            }else if(prices[i]>Max) Max = prices[i];

            result = max(result,Max-min);
        }

        return result;
    }
};