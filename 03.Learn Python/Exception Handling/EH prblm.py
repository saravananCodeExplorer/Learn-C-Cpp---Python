# prblm
try:
    x = int(input("Enter a number: "))
    y = 10 / x
except ValueError:
    print("Invalid input. Please enter a valid number.")
except ZeroDivisionError:
    print("Division by zero is not allowed.")
else:
    print("Division result:", y)
finally:
    print("Execution completed.")

