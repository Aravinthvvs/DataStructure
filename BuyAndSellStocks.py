def MaxProfit(StockstList):
    if(len(StockstList) == 0):
        return 0
    minBuy = None
    maxPro = 0
    for i in range(1,len(StockstList)):
        minBuy = (
            min(minBuy,StockstList[i-1]) 
            if minBuy is not None 
            else StockstList[i-1])
        maxPro = max(maxPro,StockstList[i]-minBuy)
    return maxPro









Slist = [7,1,5,3,6,4]

print(MaxProfit(Slist))
