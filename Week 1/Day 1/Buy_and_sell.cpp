class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<profit)
            profit=prices[i];
            int price=prices[i]-profit;
            if(maxprofit<price)
            maxprofit=price;
        }
        return maxprofit;
    }
};