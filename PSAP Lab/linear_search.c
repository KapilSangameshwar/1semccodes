#include <stdio.h>
int main()
{
    int number[10];
    int a, i,k=0;
    for (int j = 0; j < 10; j++)
    {
        printf("The number[%d] is:", j);
        scanf("%d", &number[j]);
    }
    printf("Enter the number\n");
    scanf("%d", &a);
    for (i = 0; i < 10; i++)
    {
        if (a == number[i])
        {
            printf("Your is search is at %d\n", i);
            k++; 
        }
    }
    if (k<=0)
    {
        printf("No match found");
    }
    return 0;
}
