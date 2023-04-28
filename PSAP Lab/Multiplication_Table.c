#include <stdio.h>
int main()
{
    int count, n, r;

    printf("Enter a num");
    scanf("%d", &n);
    count = 1;
start:
    if (count <= 10)
    {

        r = n * count;
        printf("%d*%d=%d\n", n, count, r);
        count++;
        goto start;
    }
    return 0;
}
