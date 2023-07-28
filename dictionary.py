def main():
    height = get_height()
    for i in range(height):
        print("#")

def get_height():
    while True:
        n = get_int("height: ")
        if n > 0:
            return n

def get_int(prompt):
    while True:
        try:
            value = int(input(prompt))
            return value
        except ValueError:
            print("Invalid input. Please enter an integer.")

# Calling the main function to start the program
main()
