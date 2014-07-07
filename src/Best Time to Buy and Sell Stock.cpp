class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.empty())
            return 0;
        int maxprice = prices[0], minprice = prices[0];
        int ret = maxprice - minprice;
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] > maxprice)
            {
                maxprice = prices[i];
                if(ret < maxprice - minprice)
                    ret = maxprice - minprice;
            }
            else if(prices[i] < minprice)
            {
                maxprice = minprice = prices[i];
            }
        }
        return ret;
    }
};