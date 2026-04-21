#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);
    if(n1>n2){
        printf("%d is greater than %d",n1,n2);
    }
    else if(n1==n2){
        printf("%d is equal to %d",n2,n1);
    }
    else{
        printf("%d is greater than %d",n2,n1);
    }
    return 0;
}