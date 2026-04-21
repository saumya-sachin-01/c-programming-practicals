#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct Student s1;
    s1.roll = 101;
    s1.marks = 88.75f;
    strcpy(s1.name, "Kiran");
    printf("Using dot operator :\n");
    printf("Name : %s\n", s1.name);
    printf("Roll : %d\n", s1.roll);
    printf("Marks : %.0f\n", s1.marks);
    printf("Using arrow operator with ponter :\n");
    struct Student *ch = &s1;
    ch->marks = 88.75f;
    ch->roll = 101;
    strcpy(ch->name, "Kiran");
    printf("Name : %s\n", ch->name);
    printf("Roll : %d\n", ch->roll);
    printf("Marks : %.2f\n", ch->marks);
    return 0;
}