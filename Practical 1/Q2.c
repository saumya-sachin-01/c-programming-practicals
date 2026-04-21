#include<stdio.h>
int main (){
    int l,b;
    printf("Enter Length = ");
    scanf("%d",&l);
    printf("Enter Breadth = ");
    scanf("%d",&b);
    printf("Perimeter = %d\n", 2*(l+b));
    printf("Area = %d\n", l*b);
    return 0;

}