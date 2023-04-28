#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, D1, D2, D;

    printf("enter the coefficients of x^2,x and the constant: \n");
    scanf("%d%d%d", &a, &b, &c);

    D = ((b * b) - (4 * a * c));

    D1 = ((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
    D2 = ((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a);

    if (D > 0)
    {
        printf("the roots are real and unique %d %d", D1, D2);
    }
    else if (D == 0)
    {
        printf("the roots are real and equal %d %d", D1, D2);
    }
    else
    {
        printf(" the roots are imaginary");
    }

    return 0;
}