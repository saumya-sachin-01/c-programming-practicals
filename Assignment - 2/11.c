#include <stdio.h>
#include <string.h>
struct Student {
int roll;
char name[50];
float marks;
};
int main() {
struct Student s;
struct Student *ptr = &s;
ptr->roll = 105;
strcpy(ptr->name, "Neha");
ptr->marks = 91.25f;

printf("Roll: %d\n", s.roll);
printf("Name: %s\n", s.name);
printf("Marks: %.2f\n", s.marks);
return 0;
}