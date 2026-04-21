#include <stdio.h>
#include<string.h>
struct Date
{
    int date;
    int month;
    int year;
};
struct student
{
    int roll;
    char name[50];
    struct Date dob;
};
int main()
{
    struct student s;
    s.roll = 101;
    strcpy(s.name, "Meera");
    s.dob.date = 23;
    s.dob.month = 12;
    s.dob.year = 2004;
    printf("Student Details :\n");
    printf("Roll : %d\n", s.roll);
    printf("Name : %s\n", s.name);
    printf("DOB : %02d-%02d-%d\n", s.dob.date, s.dob.month, s.dob.year);
    return 0;
}