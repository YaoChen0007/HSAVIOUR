# Input students for each exam
cet = set(input("Enter students for CET (space separated): ").split())
jee = set(input("Enter students for JEE (space separated): ").split())
neet = set(input("Enter students for NEET (space separated): ").split())

# Union → students appearing in ANY exam
all_students = cet | jee | neet

# Intersection → students appearing in ALL exams
common_students = cet & jee & neet

# Difference → students in CET but not in JEE
cet_not_jee = cet - jee

print("\n--- Results ---")
print("All Students (Union):", all_students)
print("Students in all exams (Intersection):", common_students)
print("Students in CET but not in JEE (Difference):", cet_not_jee)