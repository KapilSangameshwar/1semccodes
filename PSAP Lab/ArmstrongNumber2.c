#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e, sum = 0;
    printf("Enter a number:");
    scanf(" %d", &a);
    c = a;
    d = 0;
    e = a;
    while (e != 0)
    {
        e /= 10;
        d++;
    }
    
    for (; c != 0; c /= 10)
    {
        b = c % 10;
        sum = sum + round(pow(b, d));
        printf("%d \n", sum);
    }

    if (a == sum)
    {
        printf("The number is Armstrong");
    }
    else
    {
        printf("The number is NOT Armstrong");
    }

    return 0;
}