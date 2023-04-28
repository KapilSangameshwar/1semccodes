#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int random,x1=1,x2=100,count=1;
    char user,c;

    srand(time(0));
    random=(rand()%(x2-x1+1))+x1;

    printf("\n Welcome! \n I am going to guess the number in your mind \n");
    printf("Every time I guess Please reply as follows,\n S:If my guess is smaller than the number in your mind, \n L:If my guess is larger than the number in your mind, \n E:If my gues is same as the number in your mind.\n");
    
    printf("\n Choose a number between 1 and 100 and remember it in your mind. \n ");

    while(user!='E'&& user!=13)
    {
        printf("My Guess is :%d \n Please Reply(L/S/E): \n",random);
        scanf("%c%c",&user,&c);

        if(user=='S')
        {
            x1=random;
            random=(rand()%(x2-x1+1))+x1;
            count++;

        }
        else if(user=='L')
        {
            x2=random;
            random=(rand()%(x2-x1+1))+x1;
            count++;

        }
        else if(user=='E')
        {
            printf("\n Yesss!I guessed your number correctly in %d attempts. \n ",count);

        }
        else
        {
            printf("Invalid Input");
        }
        
    }
    printf(" \n Thanks for Playing the game. \n");
    
    return 0;

}