#include <stdio.h>
int main()
{
    int main;
    int n, n1, n2, n3;
    printf("Enter a 3 digit number : ");
    scanf("%d", &n);
    n1 = n / 100;
    n2 = (n / 10) - (n1 * 10);
    n3 = n - (n1 * 100) - (n2 * 10);
    printf("Reversed Digit : %d%d%d\n", n3, n2, n1);
    return 0;
}