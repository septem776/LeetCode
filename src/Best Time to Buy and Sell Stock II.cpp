class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Note: The Solution object is instantiated only once and is reused by each test case
        if(prices.size() == 0)
            return 0;
        int ans = 0;
        int firstbuy = -1;
        for(int i=0; i<prices.size()-1; i++)
        {
            if(prices[i+1] > prices[i])
            {
                firstbuy = i;
                break;
            }
        }
        if(firstbuy == -1)
            return ans;
        int buy = firstbuy;
        int sell = -1;
        while(buy < prices.size())
        {
            int i = buy;
            while(i<prices.size()-1 && prices[i] <= prices[i+1])
                i++;
            sell = i;
            ans += prices[sell] - prices[buy];
            while(i<prices.size()-1 && prices[i] >= prices[i+1])
                i++;
            if(i == prices.size()-1)
                return ans;
            buy = i;
        }
    }
};