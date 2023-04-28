#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);

    int a[n], *ptr1, *ptr2, i, temp, j;

    printf("Enter the values for array: \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i <= 4; i++)
        {
            ptr1 = &a[i];
            ptr2 = &a[i + 1];
            if (*ptr1 > *ptr2)
            {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
    for (i = 0; i <= 4; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
