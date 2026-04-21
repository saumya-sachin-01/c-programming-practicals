#include<stdio.h>
int main (){
    int n=1,num;
    printf("Enter a nummber :");
    scanf("%d",&num);
    for(int i=1; i <=num;i++){
        for(int j=1;j<=i;j++){
      printf("%d ",n);
      n++;
    }
    printf("\n");
}
    return 0;
}