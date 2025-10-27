#include <stdio.h>
int main()
{
    int total = 21, choosen = 1, computer;
    printf("====welcome to the matchstick game===\n");
    printf("the game rules are very simple\n ");
    printf("u have to pick any random  stick number between 1 to 4\n");
    printf("press any character to start the game\n");
    getchar();

    while (total > 1)
    {
        printf("choose a no beetween 1 to 4\n");
        scanf("%d", &choosen);
        
        if (choosen > 4 || choosen < 1)
        {
            continue; // restart  loop if invalid
        }

        computer = 5 - choosen;
        total = total - (choosen + computer);

        printf("computer choose %d and remaining %d\n", computer, total);
    }
    printf("computer wins!!!\n");
    return 0;
}
/*
     gcc matchstick.c
    ./a.exe
*/