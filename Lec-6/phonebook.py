# Description: This is a simple phonebook application that stores names and phone numbers in a list of dictionaries.
# here is a list of dictionaries:

people = {"John": "123-456-7890", "Jane": "234-567-8901", "Joe": "345-678-9012",}

name = input("Enter a name to search for: ")

if name in people:
	print(f"{name}'s phone number is {people[name]}")

else:
	print(f"{name} was not found in the phonebook.")

