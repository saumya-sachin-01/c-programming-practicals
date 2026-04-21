#include<stdio.h>
int main()
{
    char n1;
    printf("Enter alphabet : ");
    scanf("%c",&n1);
  
    if(n1=='a'||n1=='e'||n1=='i'||n1=='o'||n1=='u'||n1=='A'||n1=='E'||n1=='I'||n1=='O'||n1=='U'){
        printf("%c is vowel!",n1);
    }
   
    else{
        printf("%c is consonant!",n1);
    }
    return 0;
}