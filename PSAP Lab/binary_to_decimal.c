#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main()
{ 
    int num,decimal=0,binary,rem,i,a;

    printf("Enter the binary number which you want to convert in 1's and 0's: \n ");
    scanf("%d",&num);

    binary=num;

    for(i=0;i<4;i++)
    {
        a=binary%10;
        if(a==1)
        {
            
           decimal=decimal+pow(2,i); 
           

        }
        binary=binary/10;

        

    }
    printf("the decimal number is %d",decimal);





return 0;

}