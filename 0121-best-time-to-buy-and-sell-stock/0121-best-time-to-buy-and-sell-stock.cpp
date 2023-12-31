class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int low=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<low)low=prices[i];
            profit=max(profit,prices[i]-low);
        }
        return profit;
    }
};