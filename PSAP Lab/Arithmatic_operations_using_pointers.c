#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, *ptr1, *ptr2;
    float c,d;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;
    c=(*ptr1)*1.0 / (*ptr2);
    d=(*ptr1) % (*ptr2);

    printf("The sum of the numbers are %d \n", (*ptr1 + *ptr2));

    printf("The difference of the two numbers is %d \n", (*ptr1 - *ptr2));

    printf("The multiplication the two numbers is %d \n", ((*ptr1) * (*ptr2)));

    printf("The division of the two numbers is %f \n", c);

    printf("The mod of the two numbers is %d \n", d);

        return 0;
}