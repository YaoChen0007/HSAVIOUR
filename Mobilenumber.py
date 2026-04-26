import re

num = input("Enter phone number: ")

pattern = r'^[6-9][0-9]{9}$'

if re.fullmatch(pattern, num):
    print("Valid Phone Number")
else:
    print("Invalid Phone Number")