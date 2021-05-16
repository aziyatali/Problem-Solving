class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int minStock = prices[0], maxProfit = 0;
     for (int i = 1; i < prices.size(); i++){
         maxProfit = max(maxProfit, prices[i]-minStock);
         minStock = min(minStock, prices[i]);
     }
    return maxProfit;
  }
};