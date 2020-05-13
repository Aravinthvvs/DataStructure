lower = 2
upper = 10000
prime = [i for i in range(lower, upper + 1) if all(i % j != 0 for j in range(2, i))]
print(prime)