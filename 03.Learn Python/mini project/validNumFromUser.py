# Function to get a valid number from the user
def get_number():
    while True:
        try:
            number = int(input("Enter a number greater than 10: "))
            return number
        except ValueError:
            print("Invalid input. Please enter an integer.")

# Main program logic
number = get_number()

while number <= 10:
    print("The number is not greater than 10. Try again.")
    number = get_number()

print(f"Thank you! You entered {number}, which is greater than 10.")
