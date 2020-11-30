#include <stdio.h>
#include "randomNumberGen.c"

int main()
{
    int answer, guess, chance = 10, noOfTimesUserGuess = 0;
    answer = generate();

    do
    {
        printf("Guess the number between 1 - 100: ");
        scanf("%d", &guess);

        if (chance == 0)
        {
            printf("\n\n----------------------\n");
            printf("|You lose the Game.😢|\n");
            printf("----------------------\n");
            break;
        }
        else if (guess > answer)
        {
            printf("You guessed pretty higher.\n");
        }
        else if (guess < answer)
        {
            printf("You guessed pretty low.\n");
        }
        else{
            printf("Congratulations!!🎉🎉🎉 You won the game.\nYou attempted %d times", noOfTimesUserGuess);
            break;
        }

        printf("------------------------------------------------------------->");

        noOfTimesUserGuess++;
        chance--;
    } while (1);

    if (chance == 10)
    {
        printf("You lose the game!!!!!!!!!1");
    }
    

    return 0;
}