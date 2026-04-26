arr = list(map(int, input("Enter elements: ").split()))
n = len(arr)

# Mean
mean = sum(arr) / n

# Median
arr.sort()
if n % 2 == 0:
    median = (arr[n//2 - 1] + arr[n//2]) / 2
else:
    median = arr[n//2]

# Variance
var = sum((x - mean) ** 2 for x in arr) / n

# Std Dev
std = var ** 0.5

print("Mean:", mean)
print("Median:", median)
print("Variance:", var)
print("Standard Deviation:", std)