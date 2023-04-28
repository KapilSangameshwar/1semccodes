#include<stdio.h>
int fibonacci(int *array,int n)
{
    for(int i=3;i<n;i++)
    {
        array[i]=array[i-1]+array[i-2];
    }

}

int main()
    {
        int n;

        printf("Enter the number of elements in the array: \n");
        scanf("%d",&n);
        int a[n];
        
        a[0]=0;
        a[1]=1;
        a[2]=1;

        if(n>3)
        {
            fibonacci(a, n);
        }
        for(int i=0;i<n;i++)
        {
            printf(" %d ",a[i]);
        }
        return 0;
    }
