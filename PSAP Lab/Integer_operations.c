#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Enter the Operator:");
    scanf(" %c",&c);

    switch(c)
    {
        case '+':
        printf("the sum of the numbers are %d",(a+b));
        break;
        case '-':
        printf("the difference of the two numbers is %d \n",(a-b));
        break;

        case '*':
        printf("the multiplication the two numbers is %d \n",(a*b));
        break;

        case '/':
        printf("the division of the two numbers is %d \n",(a/b));
        break;

        case '%':
        printf("the mod of the two numbers is %d \n",(a%b));
        break;

        default:
        printf("operator not found");
    }
    printf("this is an example of switch case");
    return 0;
}
