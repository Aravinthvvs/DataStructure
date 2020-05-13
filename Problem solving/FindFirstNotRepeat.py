def findFirstNonRepeatNum(arr):
    map = {}
    for num in arr:
        #print(num)
        if num in map:
            map[num] +=1
        else:
            map[num] = 1
    for n in arr:
        #print(n,map[n])
        if (map[n] == 1):
            return n
    return -1

arr = [0,1,2,3,2,1,0,4,4]
print("output",findFirstNonRepeatNum(arr))