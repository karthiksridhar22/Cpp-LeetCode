class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0]; 
        int max_profit = 0; 
        int i = 1; 
        while(i < prices.size()){
            if(prices[i] <= min){
                min = prices[i];
            }
            else{
                max_profit = max(max_profit, prices[i] - min);
            }
            i = i+1;
        }
        return max_profit;
    }
};