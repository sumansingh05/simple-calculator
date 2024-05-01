#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to the world of guessing numbers.\n");
    random = rand() % 100 + 1; // generating between 0 to 100

    do
    {
        printf("\nPlease enter your Guess between(1 to 100):");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random)
        {
            printf("Guess a larger number. \n");
        }
        else if (guess > random)
        {
            printf("Guess a smaller number. \n");
        }
        else
        {
            printf("Congratulations !!! You have successfully guessed the Number in %d attempts", no_of_guess);
        }
    } while (guess != random);
    printf("\n Bye Bye, Thanks for playing.");
    printf("Developed by Suman Kumar Singh.");
}