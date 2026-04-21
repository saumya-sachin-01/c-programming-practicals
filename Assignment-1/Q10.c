#include <stdio.h>

int main()
{
    int attendance, internalMarks;

    printf("--- Online Exam Validator ---\n");

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    printf("Enter internal marks: ");
    scanf("%d", &internalMarks);

    if (attendance >= 75)
    {
        if (internalMarks >= 20)
        {
            printf("Eligible for Exam\n");
        }
        else
        {
            printf(" Not Eligible (Internal marks too low)\n");
        }
    }
    else
    {
        printf("Not Eligible (Attendance too low)\n");
    }

    return 0;
}