#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // initialize variables
    int randomNumber = 0;
    time_t t;
    int userInput;
    int numberOfGuesses = 4;

    // initialize random number generator
    srand((unsigned)time(&t));

    // get the random number
    randomNumber = rand() % 21;

    printf("\nThe number is in the range of 0-20, try guessing it \n");

    for (int triesLeft = numberOfGuesses; triesLeft > 0; triesLeft--)
    {
        printf("You have %i tr%s left. \n", triesLeft, triesLeft == 1 ? "y" : "ies");
        userInput = 25;
        printf("Enter a guess: ");
        while (userInput > 20 || userInput < 0)
        {
            scanf("%i", &userInput);
            if (userInput > 20 || userInput < 0)
            {
                printf("You must choose a number between 0-20 \n");
            }
        }

        if (userInput == randomNumber)
        {
            printf("Congratulations! You have guessed the right number! \n\n");
            printf("\nYou have won the game. Press any key to exit.\n");
            scanf("%i", userInput);
            return 0;
        }
        if (userInput > randomNumber)
        {
            printf("Sorry not %i! Your guess is too high \n\n", userInput);
        }
        if (userInput < randomNumber)
        {
            printf("Sorry not %i! Your guess is too low \n\n", userInput);
        }
    }

    printf("\nYou have lost, because you ran out of tries. Press any key to exit.\n");
    scanf("%i", userInput);
    return 0;
}