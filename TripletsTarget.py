def FindTriplets(arr,sum):
    n = len(arr)
    for i in range(0,n-1):
        a = set()
        curSum = sum-arr[i]
        for j in range(i+1,n):
            if (curSum-arr[j]) in a:
                print("Triplets :: ",arr[i],arr[j],curSum-arr[j])
            a.add(arr[j])
    return False

arr = [1,3,4,5,7,2]
FindTriplets(arr,9)