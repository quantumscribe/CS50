import csv
from collections import Counter

# Open the CSV file containing favorite problems
with open("favorites.csv", "r") as file:
	# Create a DictReader to read the CSV file as a dictionary
	reader = csv.DictReader(file)
	# Initialize a Counter to count occurrences of each favorite problem
	counts = Counter()

	# Iterate over each row in the CSV file
	for row in reader:
		# Get the favorite problem from the current row
		favorite = row["problem"]
		# Increment the count for this favorite problem
		counts[favorite] += 1

# Prompt the user to input their favorite problem
favorite = input("What is your favorite problem? ")
# Print the count of how many times this problem was listed as a favorite
print(f"{favorite} : {counts[favorite]}")