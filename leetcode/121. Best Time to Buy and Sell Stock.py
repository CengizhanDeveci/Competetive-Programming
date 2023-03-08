class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxprofit = 0
        minprice = sys.maxsize
        for i in prices:
            if i < minprice:
                minprice = i
            elif maxprofit < i - minprice:
                maxprofit = i - minprice
        return maxprofit
        