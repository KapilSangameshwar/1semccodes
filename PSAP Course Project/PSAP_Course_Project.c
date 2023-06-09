#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define Employee struct emp

void welcome();
void displaybasic(FILE *fp);
void add(FILE *fp);
FILE *del(FILE *fp);
void modify(FILE *fp);
void displayList(FILE *fp);
void searchRecord(FILE *fp);
void printChar(char ch, int n);
void printHead();

struct emp
{
    int id;
    char name[100];
    char desgn[10];
    float sal;
    char gender[10];
    char branch[50];
    char psaddr[200];
    char prtaddr[200];
    char phone[15];
    char mail[20];
};

int main()
{
    FILE *fp;
    Employee e;
    int option;
    char another;

    if ((fp = fopen("C:\\Users\\KAPIL SANGAMESHWAR\\OneDrive\\Desktop\\Programming in C\\PSAP Course Project\\employeeInfo.txt", "rb+")) == NULL)
    {
        if ((fp = fopen("C:\\Users\\KAPIL SANGAMESHWAR\\OneDrive\\Desktop\\Programming in C\\PSAP Course Project\\employeeInfo.txt", "wb+")) == NULL)
        {
            printf("Can't open file");
            return 0;
        }
    }
    char username[10], password[10];
    printHead();
    welcome();
    printHead();
    printf("\n\t\t\t\t  Login Screen");
    printf("\n\t\t\t      Enter Your Credential");
    printf("\n\n\n\t\tUsername: ");
    scanf("%s", username);
    printf("\n\t\tPassword: ");
    int i;
    i = 0;
    do
    {
        password[i] = getch();
        if (password[i] == 13)
        {
            break;
        }
        else if (password[i] == 8 && i > 0)
        {
            printf("%c%c%c", 8, 32, 8);
            i--;
        }
        else
        {
            printf("*");
            i++;
        }
    } while (password[i] != 13);
    password[i] = '\0';

    if (((strcmp(username, "Kapil")) == 0) && ((strcmp(password, "pass") == 0)))
    {
        while (1)
        {
            printHead();
            printf("\n\t\t\t\tMain Menu");
            printf("\n\n\n");

            printf("\n\n\t\t\t1. Add Employee");
            printf("\n\n\t\t\t2. Delete Employee");
            printf("\n\n\t\t\t3. Modify Employee");
            printf("\n\n\t\t\t4. Display Employee List");
            printf("\n\n\t\t\t5. Search Record");
            printf("\n\n\t\t\t6. Display Basic Info");
            printf("\n\n\t\t\t0. EXIT");

            printf("\n\n\t\tEnter Your Option :--> ");
            scanf("%d", &option);

            switch (option)
            {
            case 0:
                return 1;
                break;
            case 1:
                add(fp);
                break;
            case 2:
                fp = del(fp);
                break;
            case 3:
                modify(fp);
                break;
            case 4:
                displayList(fp);
                break;
            case 5:
                searchRecord(fp);
                break;
            case 6:
                displaybasic(fp);
                break;
            default:
                printf("\n\t\tYou Pressed wrong key");
                printf("\n\t\tProgram terminated");
                getch();
                exit(0);
            }
        }
    }
    else
    {
        printf("\n\t\tLogin Failed");
    }

    return 1;
}

void welcome()
{
    printf("\n\n\n\n\n\t\t[ [ [ WELCOME TO OUR EMPLOYEE MANAGEMENT SYSTEM ] ] ]\n\n\n\n\n\n\n\t");
    system("pause");
}

void printChar(char ch, int n)
{
    while (n--)
    {
        putchar(ch);
    }
}

void printHead()
{
    system("cls");
    printf("\t");
    printChar('=', 65);
    printf("\n\t");
    printChar('=', 16);
    printf("[EMPLOYEE] [MANAGEMENT] [SYSTEM]");
    printChar('=', 17);
    printf("\n\t");
    printChar('=', 65);
}

void add(FILE *fp)
{
    printHead();

    printf("\n\t\t\tAdd Employee");
    char another = 'y';
    Employee e;

    fseek(fp, 0, SEEK_END);
    while (another == 'y' || another == 'Y')
    {
        printf("\n\n\t\tEnter ID number: ");
        scanf("%d", &e.id);
        printf("\n\n\t\tEnter Full Name of Employee: ");
        fflush(stdin);
        fgets(e.name, 100, stdin);
        e.name[strlen(e.name) - 1] = '\0';

        printf("\n\n\t\tEnter Designation: ");
        fflush(stdin);
        fgets(e.desgn, 10, stdin);
        e.desgn[strlen(e.desgn) - 1] = '\0';

        printf("\n\n\t\tEnter Gender: ");
        fflush(stdin);
        fgets(e.gender, 10, stdin);
        e.gender[strlen(e.gender) - 1] = '\0';

        printf("\n\n\t\tEnter Branch: ");
        fflush(stdin);
        fgets(e.branch, 50, stdin);
        e.branch[strlen(e.branch) - 1] = '\0';

        printf("\n\n\t\tEnter Salary: ");
        scanf("%f", &e.sal);

        printf("\n\n\t\tEnter Present Address: ");
        fflush(stdin);
        fgets(e.psaddr, 200, stdin);
        e.psaddr[strlen(e.psaddr) - 1] = '\0';

        printf("\n\n\t\tEnter Permanant Address: ");
        fflush(stdin);
        fgets(e.prtaddr, 200, stdin);
        e.prtaddr[strlen(e.prtaddr) - 1] = '\0';

        printf("\n\n\t\tEnter Phone: ");
        fflush(stdin);
        fgets(e.phone, 50, stdin);
        e.phone[strlen(e.phone) - 1] = '\0';

        printf("\n\n\t\tEnter E-mail: ");
        fflush(stdin);
        fgets(e.mail, 20, stdin);
        e.mail[strlen(e.mail) - 1] = '\0';

        fwrite(&e, sizeof(e), 1, fp);

        printf("\n\n\t\tWant to enter another employee info (Y/N)\t");
        fflush(stdin);
        another = getchar();
    }
}

FILE *del(FILE *fp)
{
    printHead();
    printf("\n\t\t\tDelete Employee");
    Employee e;
    int flag = 0, tempid, siz = sizeof(e);
    FILE *ft;

    if ((ft = fopen("C:\\Users\\KAPIL SANGAMESHWAR\\OneDrive\\Desktop\\Programming in C\\PSAP Course Project\\temp.txt", "wb+")) == NULL)
    {
        printf("\n\n\t\t\t\\t!!! ERROR !!!\n\t\t");
        system("pause");
        return fp;
    }

    printf("\n\n\tEnter ID number of Employee to Delete the Record");
    printf("\n\n\t\t\tID No. : ");
    scanf("%d", &tempid);

    rewind(fp);

    while ((fread(&e, siz, 1, fp)) == 1)
    {
        if (e.id == tempid)
        {
            flag = 1;
            printf("\n\tRecord Deleted for");
            printf("\n\n\t\t%s\n\n\t\t%s\n\n\t\t%d\n\t", e.name, e.branch, e.id);
            continue;
        }

        fwrite(&e, siz, 1, ft);
    }

    fclose(fp);
    fclose(ft);

    remove("employeeInfo.txt");
    rename("temp.txt", "employeeInfo.txt");

    if ((fp = fopen("employeeInfo.txt", "rb+")) == NULL)
    {
        printf("ERROR");
        return NULL;
    }

    if (flag == 0)
        printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND \n\t");

    printChar('-', 65);
    printf("\n\t");
    system("pause");
    return fp;
}

void modify(FILE *fp)
{
    printHead();
    printf("\n\t\t\tModify Employee");
    Employee e;
    int i, flag = 0, tempid, siz = sizeof(e);
    float sal;

    printf("\n\n\tEnter ID Number of Employee to Modify the Record : ");
    scanf("%d", &tempid);

    rewind(fp);

    while ((fread(&e, siz, 1, fp)) == 1)
    {
        if (e.id == tempid)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        fseek(fp, -siz, SEEK_CUR);
        printf("\n\n\t\tRecord Found");
        printf("\n\n\t\tEnter New Data for the Record");

        printf("\n\n\t\tEnter Full Name of Employee: ");
        fflush(stdin);
        fgets(e.name, 100, stdin);
        e.name[strlen(e.name) - 1] = '\0';

        printf("\n\n\t\tEnter Designation: ");
        fflush(stdin);
        fgets(e.desgn, 10, stdin);
        e.desgn[strlen(e.desgn) - 1] = '\0';

        printf("\n\n\t\tEnter Gender: ");
        fflush(stdin);
        fgets(e.gender, 10, stdin);
        e.gender[strlen(e.gender) - 1] = '\0';

        printf("\n\n\t\tEnter Branch: ");
        fflush(stdin);
        fgets(e.branch, 50, stdin);
        e.branch[strlen(e.branch) - 1] = '\0';

        printf("\n\n\t\tEnter Salary: ");
        scanf("%f", &e.sal);

        printf("\n\n\t\tEnter Present Address: ");
        fflush(stdin);
        fgets(e.psaddr, 200, stdin);
        e.psaddr[strlen(e.psaddr) - 1] = '\0';

        printf("\n\n\t\tEnter Permanant Address: ");
        fflush(stdin);
        fgets(e.prtaddr, 200, stdin);
        e.prtaddr[strlen(e.prtaddr) - 1] = '\0';

        printf("\n\n\t\tEnter Phone: ");
        fflush(stdin);
        fgets(e.phone, 50, stdin);
        e.phone[strlen(e.phone) - 1] = '\0';

        printf("\n\n\t\tEnter E-mail: ");
        fflush(stdin);
        fgets(e.mail, 20, stdin);
        e.mail[strlen(e.mail) - 1] = '\0';

        fwrite(&e, sizeof(e), 1, fp);
    }

    else
        printf("\n\n\t!!!! ERROR !!!! RECORD NOT FOUND");

    printf("\n\n\t");
    system("pause");
}

void displayList(FILE *fp)
{
    printHead();
    printf("\n\t\t\tList  of Employees");
    Employee e;
    int i, siz = sizeof(e);

    rewind(fp);

    while ((fread(&e, siz, 1, fp)) == 1)
    {
        printf("\n\n\t\tID : %d", e.id);
        printf("\n\n\t\tNAME : %s", e.name);
        printf("\n\n\t\tDESIGNATION : %s", e.desgn);
        printf("\n\n\t\tGENDER : %s", e.gender);
        printf("\n\n\t\tBRANCH : %s", e.branch);
        printf("\n\n\t\tSALARY : %.2f", e.sal);
        printf("\n\n\t\tPRESENT ADDRESS : %s", e.psaddr);
        printf("\n\n\t\tPERMANANT ADDRESS : %s", e.prtaddr);
        printf("\n\n\t\tPHONE : %s", e.phone);
        printf("\n\n\t\tE-MAIL : %s\n\n\t", e.mail);
        printChar('=', 65);
    }
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}

void searchRecord(FILE *fp)
{
    printHead();
    printf("\n\t\t\tSearch Employee");
    int tempid, flag, siz, i;
    Employee e;
    char another = 'y';

    siz = sizeof(e);

    while (another == 'y' || another == 'Y')
    {
        printf("\n\n\tEnter ID Number of Employee to search the record : ");
        scanf("%d", &tempid);

        rewind(fp);

        while ((fread(&e, siz, 1, fp)) == 1)
        {
            if (e.id == tempid)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            printf("\n\t\tNAME : %s", e.name);
            printf("\n\n\t\tID : %d", e.id);
            printf("\n\n\t\tDESIGNATION : %s", e.desgn);
            printf("\n\n\t\tBRANCH : %s", e.branch);
            printf("\n\n\t\tSALARY: %.2f", e.sal);
            printf("\n\n\t\tPRESENT ADDRESS : %s", e.psaddr);
            printf("\n\n\t\tPERMANANT ADDRESS : %s", e.prtaddr);
            printf("\n\n\t\tPHONE : %s", e.phone);
            printf("\n\n\t\tE-MAIL : %s", e.mail);

            printChar('=', 65);
        }
        else
        {
            printf("\n\n\t\t!!!! ERROR RECORD NOT FOUND !!!!");
        }

        printf("\n\n\t\tWant to enter another search (Y/N)");
        fflush(stdin);
        another = getchar();
    }
}

void displaybasic(FILE *fp)
{
    printHead();
    printf("\n\t\t\t Display Basic Information");
    Employee e;
    int i, siz = sizeof(e);

    rewind(fp);

    while ((fread(&e, siz, 1, fp)) == 1)
    {
        printf("\n\n\t\tID : %d", e.id);
        printf("\n\n\t\tNAME : %s", e.name);
        printf("\n\n\t\tE-MAIL : %s\n\n\t", e.mail);
        printChar('=', 65);
    }
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}
