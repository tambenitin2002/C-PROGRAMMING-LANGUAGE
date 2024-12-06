#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char1, char2)
{
    // for rock paper scissor- Returns 1 if c1>c2 and 0 otherwise . if c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
    if ((char1 == 'r') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 'p'))
    {
        return 0;
    }
    if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the  Rock,Paper ,Scissors.\n ");
    for (int i = 0; i < 10; i++)
    {
        // Take player 1's input
        printf("Player 1's turn :  \n");
        printf("Choose 1 for Rock,2 for Paper and 3 for Scissors\n");
        scanf("%d", &temp);
        //getchar();
        playerchar = dict[temp - 1];
        printf("you chose %c\n", playerchar);

        // Generate computer's input
        printf("Computer's  turn :  ");
        printf("Choose 1. for Rock , 2. for Paper and 3. for Scissors\n");
        temp = generateRandomNumber(10) + 1;
        compchar = dict[temp - 1];
        printf("CPU chose  : %c\n", compchar);

        if (greater(compchar, playerchar) == 1)
        {
            compScore += 1;
            printf("CPU Got it!\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("its a draw\n");
        }
        else
        {
            playerScore += 1;
            printf("you got it!\n");
        }
        printf("you:%d\nCPU:%d\n", playerScore, compScore);
    }

    if (playerScore > compScore)
    {
        printf("you win The Game\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU win the Game\n");
    }
    else
    {
        printf("its a draw\n");
    }

    return 0;
}
