#include <stdio.h>

void swap(int **a, int **b)
{
    int temp = **a;
    **a = **b;
    **b = temp;
}

int main()
{
    int a, b;

    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);

    int *ptr1 = &a, *ptr2 = &b;
    printf("Before swap: a = %d, b = %d\n", *ptr1, *ptr2);
    swap(&ptr1, &ptr2);
    printf("After swap: a = %d, b = %d\n", *ptr1, *ptr2);
    return 0;
}
