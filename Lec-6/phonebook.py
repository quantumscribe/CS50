# Description: This is a simple phonebook application that stores names and phone numbers in a dictionary.

# Define a dictionary with names as keys and phone numbers as values
people = {"John": "123-456-7890", "Jane": "234-567-8901", "Joe": "345-678-9012"}

# Prompt the user to enter a name to search for in the phonebook
name = input("Enter a name to search for: ")

# Check if the entered name exists in the dictionary
if name in people:
	# If the name exists, print the corresponding phone number
	print(f"{name}'s phone number is {people[name]}")
else:
	# If the name does not exist, print a message indicating that the name was not found
	print(f"{name} was not found in the phonebook.")
