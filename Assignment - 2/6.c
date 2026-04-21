#include<stdio.h>
struct student {
    int roll;
    char name[50];
    float marks[3];
};
int main ()
{
struct student s = {101,"Rohit",{85.0, 90.5 , 78.0}};
printf("Roll : %d\n",s.roll);
printf("Name : %s\n",s.name);
printf("Marks : %.2f,%.2f,%.2f\n",s.marks[0],s.marks[1],s.marks[2]);
printf("Average : %.2f\n",(s.marks[0]+s.marks[1]+s.marks[2])/3);
return 0;
}