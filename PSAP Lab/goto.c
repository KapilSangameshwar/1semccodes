#include<stdio.h>
#include<math.h>

int main()
{
    int i = 1,a;
    printf("enter a number:");
    scanf("%d",&a);
    table:
    if (i <= 10) {
        
        printf("%d \n",a*i);
        i++;
        goto table;
    }
    return 0;
}