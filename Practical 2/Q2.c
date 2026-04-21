#include<stdio.h>
int main (){
    float c;
    printf("Enter temperature in celsius : ");
    scanf("%f",&c);
    printf("Temperature in farenheit : %.2f\n",(c*1.8)+32);
    printf("Temperature in kelvin : %.2f\n",c+273.15);
    return 0;

}