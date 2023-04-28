#include<stdio.h>
#include<conio.h>

int main()
{
   int a,b,c;
   printf("Enter three numbers");
   scanf("%d %d %d",&a,&b,&c);
   if(a<b)
   {
   if(a<c)
   {
   printf("a is the smallest number");
   }
   else
   {
   printf("c is the smallest number");
   }
   }
   else
   {
   if (b<c)
   {
   printf("b is the smallest");
   }
   else
   {
   printf("c is the smallest");
   }
   }
   return 0;
}
