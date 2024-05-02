# A simple calculator in python 

import math

def modulus(a, b):
    if b == 0:
        print("Modulus is not possible")
    else:
        return a % b

def print_menu():
    print("\n \n Welcome to simple calculator \n\n")
    print("Choose one of the following operation: \n")
    print("1 for addition")
    print("2 for subtraction")
    print("3 for multiplication")
    print("4 for division")
    print("5 for Modulous")
    print("6 for Power")
    print("7 for exit")
    print("Now enter your choice:",end=" ")

def main():
    while True:
        print_menu()
        choice = int(input())

        if choice == 7:
            break

        if choice < 1 or choice > 7:
            print("Invalid choice")
            continue

        first = float(input("Enter first number: "))
        second = float(input("Enter second number: "))

        if choice == 1:  # addition
            result = first + second
        elif choice == 2:  # subtraction
            result = first - second
        elif choice == 3:  # multiplication
            result = first * second
        elif choice == 4:  # division
            if second == 0:
                print("Invalid argument for Division \n")
                print("Division is not possible")
                continue
            else:
                result = first / second
        elif choice == 5:  # modulus
            result = modulus(first, second)
        elif choice == 6:  # power
            result = math.pow(first, second)

        print("Result:", result)


main()