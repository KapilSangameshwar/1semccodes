#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[10000];
    int i,j=0,k;
    printf("Enter your Sentence: \n");
    scanf("%[^\n]*c",a);

    for(i=0; a[i] !='\0';i++)
    {
        if(a[i] == ' ')
        {
            j++;
            
        }
    }
     printf("The number of words in your string is : %d\n",j+1);
    
return 0;

}