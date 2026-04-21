#include <stdio.h>
#include<string.h>
struct Student
{
    int roll;
    float marks;
    char name[50];
};
int main()
{
    struct Student s1 = {101, 80.0, "Ravi"};
    struct Student s2 = {101, 80.0, "Ravi"};
    if (s1.roll == s2.roll && s1.marks == s2.marks && strcmp(s1.name, s2.name) == 0)
    {
        printf("s1 and s2 are equal.\n");
    }
    else
    {
        printf("s1 and s2 are not equal.\n");
    }
    return 0;
}