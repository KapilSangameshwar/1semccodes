#include<stdio.h>
#include<math.h>

int main()
{
    int a, b; 
    printf("\nThis program will print multiplication tables:");

    printf("\n\nGive your starting table: "); 
    scanf("%d", &a); 

    printf("\n\nGive the number of tables: "); 
    scanf("%d", &b); 

    printf("\n\n");

     for (int i=1; i<=10; i++) 
     { 
       for (int c=1; c<=b; c++ ) 
       { 
        printf("%d\t", (a + c - 1) * i); 
       } 
       printf("\n"); 
     } 
 
 return 0;
}