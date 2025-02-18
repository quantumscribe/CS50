# Initialize an empty set to store words
words = set()

# Function to check if a word is in the dictionary
def check(word):
	# Convert the word to lowercase and check if it is in the set
	return word.lower() in words

# Function to load words from a dictionary file into the set
def load(dictionary):
	# Open the dictionary file
	with open(dictionary) as file:
		# Read the file, split it into words, and update the set
		words.update(file.read().split())
	
	# Return True to indicate successful loading
	return True

# Function to get the number of words in the dictionary
def size():
	# Return the size of the set
	return len(words)

# Function to unload the dictionary from memory
def unload():
	# Return True to indicate successful unloading (no actual unloading needed for a set)
	return True