#include<stdio.h>
int main(){
    float speed,time;
    printf("Enter speed (km/h) : ");
    scanf("%f",&speed);
    printf("Enter time (hours) : ");
    scanf("%f",&time);
    printf("Distance : %.2f km\n",speed*time);
     printf("Distance : %.2f m"\n,speed*time*1000);
      printf("Distance : %.2f cm\n",speed*time*100000);
    
}