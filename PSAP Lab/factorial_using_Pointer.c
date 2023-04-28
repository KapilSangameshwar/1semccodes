#include <stdio.h>
int main()
{
    int x,answer=1;
    int i=1;
    int *ptr,*ptrans;
    printf("Enter value to find factorial of: \n");
    scanf("%d",&x);
    ptrans=&answer;
    ptr=&x;
    for(i=1;i<=*ptr;i++)
    {
        *ptrans=(*ptrans)*i; 
    }
    printf("Factorial is: %d",answer);
    return 0;
}
