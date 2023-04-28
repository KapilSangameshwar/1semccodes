#include <stdio.h>
#include <string.h>
int main()
{
    char a[10], *ptr;
    int i, b = 0, length;

    printf("Enter a string : \n");
    scanf("%s", a);

    length = strlen(a);

    for (i = 0; i <= 10; i++)
    {
        ptr = &a[i];
        if ((*ptr == 'a') || (*ptr == 'A') || (*ptr == 'e') || (*ptr == 'E') || (*ptr == 'i') || (*ptr == 'I') || (*ptr == 'o') || (*ptr == 'O') || (*ptr == 'u') || (*ptr == 'U'))
        {
            b++;
        }
    }
    printf("No. of vowels = %d\n", b);
    printf("No. of consonants = %d", length - b);
    return 0;
}
