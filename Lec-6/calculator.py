# Function to get an integer input from the user with error handling
def get_int(prompt):
	while True:
		try:
			# Try to convert the input to an integer
			return int(input(prompt))
		except ValueError:
			# If input is not a valid integer, print an error message and prompt again
			print("Invalid input. Please try again.")
			return get_int(prompt)

# Main function to execute the calculator logic
def main():
	# Get the first integer from the user
	x = get_int("Enter x:")
	# Get the second integer from the user
	y = get_int("Enter y:")

	# Print the sum of the two integers
	print(x + y)

# Call the main function to run the program
main()