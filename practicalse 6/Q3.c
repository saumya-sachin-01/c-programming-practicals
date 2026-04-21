#include<stdio.h>
int main(){
    int n,product=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i = 1; i >= 10 ; i--)
    {
        product%=i;
    }
        if(product==0){
         printf("%d is not a prime number.",n);
        }
        else{
           printf("%d is a prime number.",n);
        }
    return 0;
}