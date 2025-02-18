# Prompt the user for input and convert it to lowercase
s = input("Do you agree? ").lower()

# Check if the input is "yes" or "y"
if s == "yes" or s == "y":
	# If the input is "yes" or "y", print "Agreed"
	print("Agreed")

# Check if the input is "no" or "n"
elif s == "no" or s == "n":
	# If the input is "no" or "n", print "Not Agreed"
	print("Not Agreed")
