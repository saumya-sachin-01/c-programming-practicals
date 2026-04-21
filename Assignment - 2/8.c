#include<stdio.h>
struct student {
    int roll;
    char name[50];
    float marks;
};
void printstudent(struct student s){
    printf("Roll : %d, Name : %s, Marks : %.2f",s.roll,s.name,s.marks);
}
int main (){
struct student s = {101,"Ravi",85.50};
printstudent(s);
return 0;
}