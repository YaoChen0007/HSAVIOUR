def add(a,b): return a+b
def sub(a,b): return a-b
def mul(a,b): return a*b
def div(a,b): return a/b

a = float(input("Enter first number: "))
b = float(input("Enter second number: "))

print("Addition =", add(a,b))
print("Subtraction =", sub(a,b))
print("Multiplication =", mul(a,b))

if b != 0:
    print("Division =", div(a,b))
else:
    print("Cannot divide by zero")