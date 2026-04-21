#include <stdio.h>
#include <string.h>
struct Student
{
    int roll;
    float marks;
    char name[50];
};
int main()
{
    struct Student students[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter details of student  %d\n", i + 1);
        printf("Roll : ");
        scanf("%d", &students[i].roll);
        printf("Name : ");
        scanf("%49s", students[i].name);
        printf("Marks : ");
        scanf("%f", &students[i].marks);
    }
    printf("Student Details : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Roll : %d , Name : %s , Marks : %.2f\n", students[i].roll, students[i].name, students[i].marks);
    }
    return 0;
}