#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int n, m;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);

    printf("Enter the number of columns: \n");
    scanf("%d", &m);

    int a[n][m], diagsum = 0;
    if (n == m)
    {
        printf("Enter the elements of the matrix. \n");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("The given Matrix is: \n");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf(" %d \t", a[i][j]);
            }
            printf("\n");
        }
        int j = m - 1;
        for (int i = 0; i < n; i++)
        {

            diagsum += a[i][j];

            j--;
        }
        printf("the diagonal sum is : %d \n", diagsum);
    }
    else
    {
        printf("sum of the diagonal cannot be found.");
    }
    return 0;
}