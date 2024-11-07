### 1. *Finding the Largest Number in a List*

def find_largest_number(numbers):
    largest = numbers[0]
    for number in numbers:
        if number > largest:
            largest = number
    return largest

# Example usage
numbers = [3, 5, 7, 2, 8]
print(find_largest_number(numbers))