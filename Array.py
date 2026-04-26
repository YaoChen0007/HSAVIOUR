a = list(map(int, input("Enter elements: ").split()))
b = list(map(int, input("Enter elements: ").split()))

print("Addition:", [a[i] + b[i] for i in range(len(a))])
print("Subtraction:", [a[i] - b[i] for i in range(len(a))])
print("Multiplication:", [a[i] * b[i] for i in range(len(a))])
print("Division:", [a[i] / b[i] for i in range(len(a))])