#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int n, x1, y1, x2, y2;

    printf("Enter the number of rows: \n");
    scanf("%d", &x1);

    printf("Enter the number of columns: \n");
    scanf("%d", &y1);
    int a[x1][y1];
    printf("Enter the elements of first Matrix: \n");

    for (int i = 0; i < x1; i++)
    {
        for (int j = 0; j < y1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < x1; i++)
    {
        for (int j = 0; j < y1; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number of rows: \n");
    scanf("%d", &x2);

    printf("Enter the number of columns: \n");
    scanf("%d", &y2);
    int b[x2][y2];
    printf("Enter the elements of second Matrix: \n");

    for (int i = 0; i < x2; i++)
    {
        for (int j = 0; j < y2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < x2; i++)
    {
        for (int j = 0; j < y2; j++)
        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }
    int sum[30][30], sub[30][30], mult[30][30], trans[30][30], trans1[30][30], w, z;
    char i;
    printf("Enter the operation you want to use on the given Matrices: \n");
    scanf("\n %c", &i);

    switch (i)
    {
    case '+':
    {
        if (x1 == x1 && y1 == y2)
        {
            for (int m = 0; m < x1; m++)
            {
                for (int n = 0; n < y1; n++)
                {
                    sum[m][n] = a[m][n] + b[m][n];
                }
            }
            for (int m = 0; m < x1; m++)
            {
                for (int n = 0; n < y1; n++)
                {
                    printf("%d \t", sum[m][n]);
                }
                printf("\n");
            }
            break;
        }
    }
    case '-':
    {
        if (x1 == x1 && y1 == y2)
        {
            for (int m = 0; m < x1; m++)
            {
                for (int n = 0; n < y1; n++)
                {
                    sub[m][n] = a[m][n] - b[m][n];
                }
            }
            for (int m = 0; m < x1; m++)
            {
                for (int n = 0; n < y1; n++)
                {
                    printf("%d \t", sub[m][n]);
                }
                printf("\n");
            }
            break;
        }
    }
    case '*':
    {
        if (y1 == x2)
        {

            for (w = 0; w < x1; w++)
            {
                for (z = 0; z < y2; z++)
                {
                    int s = 0;
                    for (int l = 0, p = 0; l < y1 && p < x2; l++, p++)
                    {
                        s += a[w][l] * b[p][z];
                    }
                    mult[w][z] = s;
                }
            }
            printf("\n");
            for (int o = 0; o < x1; o++)
            {
                for (int q = 0; q < y2; q++)
                {
                    printf("%d\t", mult[o][q]);
                }
                printf("\n");
            }
        }

        break;
    }
    case 't':
    {
        if (x1 == x1 && y1 == y2)
        {
            for (int m = 0; m < x1; m++)
            {
                for (int n = 0; n < y1; n++)
                {
                    trans[m][n] = a[n][m];
                }
            }
            printf("Transpose of first matrix: \n");
            for (int m = 0; m < x1; m++)
            {
                for (int n = 0; n < y1; n++)
                {
                    printf("%d \t", trans[m][n]);
                }
                printf("\n");
            }
        }
        if (x1 == x1 && y1 == y2)
        {
            for (int m = 0; m < x1; m++)
            {
                for (int n = 0; n < y1; n++)
                {
                    trans1[m][n] = b[n][m];
                }
            }
            printf("Transpose of second matrix: \n");
            for (int m = 0; m < x1; m++)
            {
                for (int n = 0; n < y1; n++)
                {
                    printf("%d \t", trans1[m][n]);
                }
                printf("\n");
            }
            break;
        }
    }
    }

    return 0;
}