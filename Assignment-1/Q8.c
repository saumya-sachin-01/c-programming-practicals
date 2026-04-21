#include <stdio.h>
int is_prime(int num)
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int sum = 0;

    for (int num = 2; num <= 100; num++)
    {
        if (is_prime(num))
        {
            sum += num;
        }
    }

    printf("Sum of all prime numbers between 1 and 100: %d\n", sum);
    return 0;
}