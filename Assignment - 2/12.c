#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
int roll;
char name[50];
float marks;
};
int main() {
struct Student *p = (struct Student *)malloc(sizeof(struct Student));
if (p == NULL) {
printf("Memory allocation failed.\n");
return 1;
}
p->roll = 201;
strcpy(p->name, "Rahul");
p->marks = 88.0f;
printf("Roll: %d, Name: %s, Marks: %.2f\n",
p->roll, p->name, p->marks);
free(p); // release memory
return 0;
}