#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks: \n");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grades of the student is: A\n");
    } else if (marks >= 80) {
        printf("Grades of the student is: B\n");
    } else if (marks >= 70) {
        printf("Grades of the student is: C\n");
    } else if (marks >= 60) {
        printf("Grades of the student is: D\n");
    } else {
        printf("The Grades of the student is: F\n");
    }

    return 0;
}
