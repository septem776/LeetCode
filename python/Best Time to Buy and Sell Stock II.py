class Solution:
    # @param prices, a list of integer
    # @return an integer
    def maxProfit(self, prices):
    	goup = False
    	ret = 0
    	for i in range(len(prices)-1):
    		if prices[i+1] >= prices[i] and not goup:
    			buy = prices[i]
    			goup = True
    			continue
    		if prices[i+1] < prices[i] and goup:
    			sell = prices[i]
    			goup = False
    			ret += sell - buy

    	if goup:
    		ret += prices[len(prices)-1] - buy
    	return ret