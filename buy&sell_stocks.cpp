 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini =prices[0];
        int profit = 0;
        for(int i =0;i<prices.size();i++){
            mini = min(mini,prices[i]);
            int prof = prices[i]-mini;
            
            profit = max(profit,prof);
            
            
        }
        
        return profit;
    }
};
