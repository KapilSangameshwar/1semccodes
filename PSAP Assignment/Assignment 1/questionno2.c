
int main()
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    int num, guess, tries = 0;
    srand(time(0)); 
    num = rand() % 100 + 1; 
    printf("Welcome! I have a number between 1 to 100, can you guess it?\n\n");
    do
    {
        printf("Give your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess > num)
        {
            printf("Too high!\n\n");
        }
        else if (guess < num)
        {
            printf("Too low!\n\n");
        }
        else
        {
            printf("\nCorrect! You got it in %d guesses!\n", tries);
        }
		
    }while (guess != num);

    return 0;
}


    