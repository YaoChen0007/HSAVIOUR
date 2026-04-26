bs = float(input("Enter Basic Salary: "))

da = 0.70 * bs
ta = 0.30 * bs
hra = 0.10 * bs

gross = bs + da + ta + hra

print("Gross Salary =", gross)