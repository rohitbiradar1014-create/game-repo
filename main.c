#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generator random number between 1 to 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_gusses = 0;
    int guessed;

    // Print the random number
    // printf("Random Number : %d\n", randomNumber);
    do
    {
        printf("Guess the  number");
        scanf("%d", &guessed);
        if (guessed > randomNumber)
        {
            printf("Lower number Please!\n");
        }
        else if (guessed < randomNumber)
        {
            printf("Higher number Please!\n");
        }
        else
        {
            printf("Congrats!!\n");
        }

        no_of_gusses++;

    } while (guessed != randomNumber);
    printf("You guessed the number in %d guesses", no_of_gusses);

    return 0;
}