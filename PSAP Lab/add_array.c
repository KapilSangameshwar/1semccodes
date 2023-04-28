#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n;

    printf("Enter the number of elements in the array: \n");
    scanf("%d",&n);

    int a[10], result = 0, i;

    for (i = 0; i < n; i++)
    {
        printf("Enter the elements of the array: \n");
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < n; i++)
    {
        result += a[i];
    }
    printf("\n The sum of all the elements of the array are: %d\n ", result);

    return 0;
}