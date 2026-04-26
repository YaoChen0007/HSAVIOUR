tasks = ()

while True:
    print("\n1.Add 2.Remove 3.Update 4.Sort 5.Show 6.Exit")
    ch = int(input("Enter choice: "))

    temp = list(tasks)

    if ch == 1:
        t = input("Enter task: ")
        temp.append(t)

    elif ch == 2:
        t = input("Enter task to remove: ")
        if t in temp:
            temp.remove(t)

    elif ch == 3:
        old = input("Enter task to update: ")
        if old in temp:
            new = input("Enter new task: ")
            i = temp.index(old)
            temp[i] = new

    elif ch == 4:
        temp.sort()

    elif ch == 5:
        print("Tasks:", tasks)

    elif ch == 6:
        break

    tasks = tuple(temp)