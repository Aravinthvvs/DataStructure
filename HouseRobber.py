def findMaxRob(inpList):
    a = 0 #(i-2)
    b = 0 #(i-1)
    for val in inpList:
        a,b = b,(max(b,a+val))
    return b

inpList =[2,7,9,3,1]
print(findMaxRob(inpList))