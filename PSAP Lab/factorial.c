#include<stdio.h>

int factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else{
        return (n*(factorial(n-1)));
    }
}

int main()
{
    int number;

    printf("Enter the number you want the factorial of: \n");
    scanf("%d",&number);
    factorial(number);
    printf("%d",factorial(number));
}