import java.util.Scanner;

public class calculator {
    public static double modulus(double a, double b) {
        if (b == 0) {
            System.out.println("Modulus is not possible");
            return Double.NaN;
        } else {
            return a % b;
        }
    }

    public static void printMenu() {
        System.out.println("\n \n Welcome to simple calculator \n\n");
        System.out.println("Choose one of the following operation: \n");
        System.out.println("1 for addition");
        System.out.println("2 for subtraction");
        System.out.println("3 for multiplication");
        System.out.println("4 for division");
        System.out.println("5 for Modulous");
        System.out.println("6 for Power");
        System.out.println("7 for exit");
        System.out.println("Now enter your choice:");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            printMenu();
            int choice = scanner.nextInt();

            if (choice == 7) {
                break;
            }

            if (choice < 1 || choice > 7) {
                System.out.println("Invalid choice");
                continue;
            }

            System.out.print("Enter first number: ");
            double first = scanner.nextDouble();
            System.out.print("Enter second number: ");
            double second = scanner.nextDouble();
            double result = 0;

            switch (choice) {
                case 1: // addition
                    result = first + second;
                    break;
                case 2: // subtraction
                    result = first - second;
                    break;
                case 3: // multiplication
                    result = first * second;
                    break;
                case 4: // division
                    if (second == 0) {
                        System.out.println("Invalid argument for Division \n");
                        System.out.println("Division is not possible");
                        continue;
                    } else {
                        result = first / second;
                    }
                    break;
                case 5: // modulus
                    result = modulus(first, second);
                    break;
                case 6: // power
                    result = Math.pow(first, second);
                    break;
            }

            System.out.println("Result: " + result);
        }

        scanner.close();
    }
}

