#include <stdio.h>

int main()
{
    char Sentence[100];
    FILE *fptr;
    fptr=(fopen("c:\\Users\\KAPIL SANGAMESHWAR\\OneDrive\\Desktop\\Programming in C\\PSAP Lab\\student_info.txt","r"));
    while(fgets(Sentence,sizeof(Sentence),fptr))
    {
        printf("%s",Sentence);
    }
    fgets(Sentence,sizeof(Sentence),fptr);
    return 0;
}
