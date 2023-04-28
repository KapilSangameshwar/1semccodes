#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,sum;
    printf("Enter any three digit number: ");
    scanf("%d",&a);

    b=a%10;
    c=((a%100)-b)/10;
    d=((a%1000)-c)/100;

    sum=pow(b,3)+pow(c,3)+pow(d,3);

    if(sum==a)
    {
        printf("It is an Amstrong Number");

    }
    else
    {
        printf("It is not an Amstrong Number");
    }

    return 0;
}