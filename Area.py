while True:
    print("\n--- Area Calculator ---")
    print("1. Circle")
    print("2. Rectangle")
    print("3. Triangle")
    print("4. Exit")

    ch = int(input("Enter your choice: "))

    if ch == 1:
        r = float(input("Enter radius: "))
        area = 3.14 * r * r
        print("Area of Circle =", area)

    elif ch == 2:
        l = float(input("Enter length: "))
        b = float(input("Enter breadth: "))
        area = l * b
        print("Area of Rectangle =", area)

    elif ch == 3:
        b = float(input("Enter base: "))
        h = float(input("Enter height: "))
        area = 0.5 * b * h
        print("Area of Triangle =", area)

    elif ch == 4:
        print("Exiting...")
        break

    else:
        print("Invalid choice")