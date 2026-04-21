#include <stdio.h>
#include <string.h>
struct Student
{
    int roll;
    char name[50];
    int marks;
}s;
int main()

{
    struct Student;
    s.roll = 103;
    strcpy(s.name, "Vikas");
    s.marks = 78.25;
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks : %d\n", s.marks);
    return 0;
}