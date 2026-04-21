#include<stdio.h>
#include<math.h>
int main(){
    float p1,q1,p2,q2;
    printf("Enter price of item 1 = ");
    scanf("%f",&p1);
     printf("Enter quantity of item 1 = ");
    scanf("%f",&q1);
     printf("Enter price of item 2 = ");
    scanf("%f",&p2);
     printf("Enter quantity of item 2 = ");
    scanf("%f",&q2);
    printf("Subtotal = %f\n",p1*q1+p2*q2);
     printf("GST = %f\n",0.18*(p1*q1+p2*q2));
     printf("Final Bill = %f\n",(p1*q1+p2*q2)+(0.18*(p1*q1+p2*q2)));
    return 0;

}