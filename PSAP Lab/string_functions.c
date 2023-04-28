// #include<stdio.h>
// #include<math.h>
// #include<conio.h>
// #include<time.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char a[30],b[30],i[30],j;
//     printf("Enter the first string: \n");
//     scanf("%s",a);

//     printf("Enter the second string: \n");
//     scanf("%s",b);

//     printf("Length of first string is %d \n",strlen(a));
//     printf("Length of second string is %d \n",strlen(b));

//     printf("Comparison of the size of two strings %d \n",strcmp(a,b));

//     printf("The concatination of the two strings is %s \n",strcat(a,b));

//     strcpy(i,a);
//     printf("The copied String is: %s",i);

// return 0;

// }
/*_____________________________________________________________________________________________________________________________________*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[30], b[30], i, j;

    printf("Enter the First String : \n");
    scanf("%s", a);

    printf("Enter the Second String: \n", b);
    scanf("%s", b);
    /*String length*/
    for (i = 0; a[i] != '\0';)
    {
        i++;
    }
    printf("length of first string: %d \n", i);

    for (j = 0; b[j] != '\0';)
    {
        j++;
    }
    printf("length of second string: %d \n", j);
    int m = i, n = j;
    /*String Copy*/
    char c[30], d[30];
    int k;

    for (k = 0; k < m; k++)
    {
        c[k] = a[k];

        printf("%c", c[k]);
    }
    for (k = 0; k < n; k++)
    {
        d[k] = b[k];
        printf("The copied String is:%c", d[k]);
    }
    printf("\n");

    /*string compare*/
    int sum = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            sum += a[i] - b[i];
        }
    }
    printf("The Comparison of the two strings is: %d \n", sum);
    /*String Concatenate*/
    for (i = 0; i < n; i++)
    {
        c[m + i] = d[i];
    }
    c[m + n] = '\0';
    printf("The concatination of the two strings is:%s", c);

    return 0;
}