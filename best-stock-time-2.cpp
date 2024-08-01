class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = prices.size() - 2; 
        int sell = prices[i+1]; 
        int profit = 0; 

        while(i >= 0){
            if (prices[i] >= sell){
                sell = prices[i];
            }
            else{
                profit = profit + (sell - prices[i]);
                sell = prices[i];
            }
            i = i-1;
        }
        return profit;
    }
};