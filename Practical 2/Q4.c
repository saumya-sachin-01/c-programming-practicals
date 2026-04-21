#include<stdio.h>
#include<math.h>
int main (){
    float wt,ht;
    printf("Enter weinght in kg :");
    scanf("%f",&wt);
    printf("Enter height in meters :");
    scanf("%f",&ht);
    printf("BMI = %.2f",wt/(ht*ht));
    return 0 ;
}