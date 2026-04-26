import re

email = input("Enter email ID: ")

pattern = r'^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$'

if re.fullmatch(pattern, email):
    print("Valid Email ID")
else:
    print("Invalid Email ID")