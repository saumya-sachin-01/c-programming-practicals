#include<stdio.h>
int main(){
    int n,product=1;
    printf("Enter a number : ");
    scanf("%d",&n);
 for (int i = n; i > 0; i--)
 {
   product*=i;
 
 }
   printf("Factorial %d! = %d",n,product);
 
return 0;
}