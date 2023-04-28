#include <stdio.h>
struct data
{
    char Name[50];
    int Roll_No;
    float Marks;
};
int main()
{
    int n;

    struct data information;

    FILE *fptr;

    fptr = (fopen("c:\\Users\\KAPIL SANGAMESHWAR\\OneDrive\\Desktop\\Programming in C\\PSAP Lab\\student_info.txt", "w+"));
    printf("\t\t\t\t\t\t");
    printf("Enter data of the students\n");
    printf("Enter number of the students: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter name: ");
        scanf("%s", information.Name);
        printf("Enter roll: ");
        scanf("%d", &information.Roll_No);
        printf("Enter marks: ");
        scanf("%f", &information.Marks);
        fprintf(fptr, "Student no %d has name %s, roll %d and marks %f \n", i, information.Name, information.Roll_No, information.Marks);
        printf("\n");
    }
    fclose(fptr);

    return 0;
}
