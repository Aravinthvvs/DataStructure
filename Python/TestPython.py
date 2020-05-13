# input = [1,2,6,4]
def multipleNum(num):
    output = ['None']*len(num)
    product = 1
    i = 0
    while i < len(num):
        output [i] = product
        product *= num[i]
        i = i+1
        print(output)
    product = 1
    i = len(num) -1

    while i >= 0:
        output [i] *= product
        product *= num[i]
        i = i -1
    return output 

nums = [1,2,6,4]
print(multipleNum(nums))