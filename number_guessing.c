#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess = 0, number = 1;

    // Use current time as seed for random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

   // printf("Random number: %d\n", randomNumber);

    do
    {
        printf("guess the no\n");
        scanf("%d", &number);
        guess++;

        if (number == randomNumber)
        {
            printf("congratulations u guessed it right!! total attempt - %d\n", guess);
            break;
        }
        else if (number > randomNumber)
        {
            printf("the random no is lower than the given no\n");
        }
        else if (number < randomNumber)
        {
            printf(" the random no is higher than the given no\n");
        }
    } while (number != randomNumber);

    return 0;
}
/*
    gcc number_guessing.c
    ./a.exe


*/