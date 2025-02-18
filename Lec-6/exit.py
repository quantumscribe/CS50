import sys  # Import the sys module to access command-line arguments and exit functions

# Check if the number of command-line arguments is not equal to 2
if len(sys.argv) != 2:
	print("Missing command line argument")  # Print an error message
	sys.exit(1)  # Exit the program with a status code of 1 (indicating an error)

# Print a greeting message using the second command-line argument
print(f"Hello, {sys.argv[1]}")

sys.exit(0)  # Exit the program with a status code of 0 (indicating success)