#include <stdio.h>
#include <math.h>



double modulus(int a, int b)
{
    if (b == 0)
    {
        printf("Modulus is not possible");
    }
    else
    {
        return a % b;
    }
}

void print_menu()
{
    printf("\n \n Welcome to simple calculator \n\n");
    printf("Choose one of the following operation: \n");
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
    printf("5 for Modulous\n");
    printf("6 for Power\n");
    printf("7 for exit\n");
    printf("Now enter  your choice:");
}

int main()
{
    double first, second, result;
    int choice;

    while (1)
    {
        print_menu();

       
        scanf("%d",&choice);
        if (choice == 7)
        {
            break;
        }

        if (choice < 1 || choice > 7)
        {
            printf("Invalid choice");
            continue;
        }

        printf("Enter first number:");
        scanf("%lf", &first);
        printf("Enter second number:");
        scanf("%lf", &second);

        switch (choice)
        {
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
            if (second == 0)
            {
                printf("Invalid argument for Division \n");
                printf("Division is not possible");
                continue;
            }
            else
            {
                return first / second;
            }
            
            break;

        case 5: // modulus
            result = modulus(first, second);
            break;

        case 6:
            result = pow(first, second);
            break;
        }
        printf("Result: %lf\n", result);
    };

    return 0;
}