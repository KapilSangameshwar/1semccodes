#include<stdio.h>

int main()
{
    int n,m;
    printf("enter a number");
    scanf("%d",&n);

    while(n>0)
    {
        m=n%10;
        printf("%d \n ",m);
        n=n/10;
    }
    
    return 0;
}