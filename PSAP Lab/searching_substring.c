#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[1000], b[1000];

    printf("Enter the first string: \n");
    scanf("%[^\n]%*c", a);
    printf("Enter the second string: \n");
    scanf("%[^\n]%*c", b);

    int len_a = strlen(a);
    int len_b = strlen(b);

    for (int i = 0; i < len_a; i++)
    {
        char temp[len_b + 1];
        for (int j = 0; j < len_b; j++)
        {
            temp[j] = a[i + j];
        }
        temp[len_b] = '\0';
        if (strcmp(temp, b) == 0)
        {
            printf("found at index: %d", i);
        }
    }

    /*

    s o h a m

    a m

    */

    return 0;
}