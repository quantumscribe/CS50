# x = int(input("Enter x:"))
# y = int(input("Enter y:"))

# z = x / y
# print(f"{z:.50f}")

def get_int(prompt):
	while True:
		try:
			return int(input(prompt))
		except ValueError:
			print("Invalid input. Please try again.")
			return get_int(prompt)
	
def main():
	x = get_int("Enter x:")
	y = get_int("Enter y:")

	print(x + y)

main()