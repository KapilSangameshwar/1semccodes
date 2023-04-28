#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int p;

    printf("Enter the number of elements of the array: \n");
    scanf("%d", &p);

    int a[p], even[p], odd[p], i, j = 0, k = 0, n;

    for (i = 0; i < p; i++)
    {
        printf("Enter the elements of the array: \n");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < p; i++)
    {
        printf("\n %d", a[i]);
    }

    for (i = 0; i < p; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[j] = a[i];
            j++;
        }
        else
        {
            odd[k] = a[i];
            k++;
        }
    }
    printf("\n The even array is: \n");
    for (n = 0; n < j; n++)
    {
        printf(" %d  ", even[n]);
    }
    printf("\n The odd array is : \n");
    for (n = 0; n < k; n++)
    {
        printf(" %d ", odd[n]);
    }

    return 0;
}