#include <stdio.h>
int main()
{
    int age, menu, days, price, actual_price, discount, discounted_price, extra_discount, extra_discounted_price;
    printf("Menu:\n");

    printf("1. General Ward - 500/day\n");

    printf("2. Semi-Private - 1000/day\n");

    printf("3. Private - 2000/day\n");

    printf("Enter menu number : ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("1. General Ward - 500/day\n");
        price = 500;
        printf("Enter age : ");
        scanf("%d", &age);
        printf("Enter number of days : ");
        scanf("%d", &days);
        actual_price = days * price;

        if (days > 10)
        {
            discount = 0.05 * actual_price;
            discounted_price = actual_price - discount;
            if (age > 60)
            {
                extra_discount = 0.10 * discounted_price;
                extra_discounted_price = discounted_price - extra_discount;
                printf("Total Bill : %d", extra_discounted_price);
            }
        }
        else
        {
            printf("Total Bill : %d", actual_price);
        }
        break;
    case 2:
        printf("2. Semi-Private - 1000/day\n");
        price = 1000;
        printf("Enter age : ");
        scanf("%d", &age);
        printf("Enter number of days : ");
        scanf("%d", &days);
        actual_price = days * price;

        if (days > 10)
        {
            discount = 0.05 * actual_price;
            discounted_price = actual_price - discount;
            if (age > 60)
            {
                extra_discount = 0.10 * discounted_price;
                extra_discounted_price = discounted_price - extra_discount;
                printf("Total Bill : %d", extra_discounted_price);
            }
        }
        else
        {
            printf("Total Bill : %d", actual_price);
        }
        break;
    case 3:
        printf("3. Private - 2000/day\n");
        price = 2000;
        printf("Enter age : ");
        scanf("%d", &age);
        printf("Enter number of days : ");
        scanf("%d", &days);
        actual_price = days * price;

        if (days > 10)
        {
            discount = 0.05 * actual_price;
            discounted_price = actual_price - discount;
            if (age > 60)
            {
                extra_discount = 0.10 * discounted_price;
                extra_discounted_price = discounted_price - extra_discount;
                printf("Total Bill : %d", extra_discounted_price);
            }
        }
        else
        {
            printf("Total Bill : %d", actual_price);
        }
        break;

    default:
        break;
    }
    return 0;
}