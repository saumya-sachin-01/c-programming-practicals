#include<stdio.h>
int main (){
    float m1,m2,m3,m4,m5;
    printf ("Enter marks of 5 subjects : ");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    printf("Total = %f\n",m1+m2+m3+m4+m5);
    printf("Average = %f\n",0.2*(m1+m2+m3+m4+m5));
    printf("Percentage = %f\n ",0.2*(m1+m2+m3+m4+m5));
    return 0;
    
}