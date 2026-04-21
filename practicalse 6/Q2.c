#include <stdio.h>
int main()
{
    int n, sumeven = 0, sumodd = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            sumeven += i;
        }
        else
        {
            sumodd += i;
        }
    }
    printf("Sum of even numbers : %d\n", sumeven);
    printf("Sum of odd numbers : %d\n", sumodd);

    return 0;
}