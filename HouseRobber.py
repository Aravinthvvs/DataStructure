def findMaxRob(inpList):
    a = 0 #(i-2)
    b = 0 #(i-1)
    for val in inpList:
        a,b = b,(max(b,a+val))
    return b

inpList =[3,5,-7,8,10]
print(findMaxRob(inpList))