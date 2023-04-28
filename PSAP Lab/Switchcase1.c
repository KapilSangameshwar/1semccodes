#include<stdio.h>
int main()
    {
        char a;
        printf("enter a alphabet:");
        scanf(" %c",&a);

        switch(a)
        {
            case 'a':
            printf("it is a vowel");
            break;
            
            case 'e':
            printf("it is a vowel");
            break;
            
            case 'i':
            printf("it is a vowel");
            break;

            case 'o':
            printf("it is a vowel");
            break;

            case 'u':
            printf("it is a vowel");
            break;

            default :
            printf("it is not a vowel");
        }
        return 0;

    }
