def getSingle(arr,n):
    sum = 0
    x = 0
    result = 0

    for i in range(0,32):
        sum = 0
        x = 1<<i

        for j in range(0,n):
            if(arr[j] & x):
                sum = sum +1
        
        if sum %3 :
            result = result | x
    return result

arr = [3,3,3,2,2,1,2,1,1,8,8,8,90]

print(getSingle(arr,len(arr)))