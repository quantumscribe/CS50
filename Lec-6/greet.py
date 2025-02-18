from sys import argv  # Import the argv list from the sys module to access command-line arguments

# Check if the number of command-line arguments is 2
if len(argv) == 2:
	# If there is exactly one argument provided (excluding the script name), print a personalized greeting
	print(f"Hello, {argv[1]}")
else:
	# If no arguments or more than one argument is provided, print a default greeting
	print("Hello, World!")