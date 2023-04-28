#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int a[10],n,found=0,i,key;

    //printf("Enter the number of elements in the array: \n");
    //scanf("%d",&n);

    for( i=0;i<10;i++)
    {
        printf("Enter the values of the array: \n");
        scanf("%d",&a[i]);
    }
    for( i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the value that you want to find: \n");
    scanf("%d",&key);
    for(i=0;i<10;i++ )
    {
        if(key==a[i]) 
        {
            printf("The position of the number is %d \n",i);
            found=1;

        }
    }    
    if(found!=1)
        {
            printf("THe number is not found in the array");
        }
        
    

     return 0;

}