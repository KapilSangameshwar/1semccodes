#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, determinant, x1, x2, d, r, i;

    printf("This program solves quadratic equation ax^2+bx+c=0\n");

    printf("Enter value for a\n");
    scanf("%f", &a);

    printf("Enter value for b\n");
    scanf("%f", &b);

    printf("Enter value for c\n");
    scanf("%f", &c);

    determinant = (b * b) - (4 * a * c);
    if (a == 0 && b == 0 && c == 0)
    {
        printf("Infinite solutions");
    }
    else if (a == 0 && b == 0)
    {
        printf("Inconsistent equation");
    }
    else if (a == 0)
    {
        d = -c / b;
        printf("Linear equation with single solution x =%f", d);
    }
    else if (determinant < 0)
    {
        r = -b / (2 * a);
        i = (sqrt(-determinant)) / (2 * a);
        printf("Complex roots :\n");
        printf("x1: %f + %fi\n", r, i);
        printf("x2: %f - %fi", r, i);
    }
    else if (determinant == 0)
    {
        printf("Real and repeated roots :\n");
        x1 = (-b) / (2 * a);
        x2 = (-b) / (2 * a);
        printf("x1: %f\n", x1);
        printf("x2 %f", x2);
    }
    else
    {
        x1 = (-b + sqrt(determinant)) / (2 * a);
        x2 = (-b - sqrt(determinant)) / (2 * a);
        printf("Real and distinct roots :\n");
        printf("x1: %f\n", x1);
        printf("x2 %f", x2);
    }
    return 0;
}
