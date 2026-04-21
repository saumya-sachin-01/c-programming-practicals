#include <stdio.h>

int main()
{
    int x;
    char z;

    printf("Enter an integer = ");
    scanf("%d", &x);

    printf("Enter a character = ");
    scanf(" %c", &z);   // space before %c is important

    return 0;
}