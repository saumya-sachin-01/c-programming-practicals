#include <stdio.h>
int main()
{
    int meal_type, days;
    float rate_per_day, total_fee, discount = 0.0;

    printf("Select meal type (1-Regular, 2-Special, 3-Premium): ");
    scanf("%d", &meal_type);

    printf("Enter number of days: ");
    scanf("%d", &days);

    switch (meal_type)
    {
    case 1:
        rate_per_day = 80.0;
        break;
    case 2:
        rate_per_day = 120.0;
        break;
    case 3:
        rate_per_day = 150.0;
        break;
    default:
        printf("Invalid meal type selected.\n");
        return 1;
    }

    total_fee = rate_per_day * days;

    if (days > 25)
    {
        discount = 0.05 * total_fee;
        total_fee -= discount;
    }

    printf("Total Mess Fee: Rs.%.2f\n", total_fee);
    if (discount > 0)
    {
        printf("Discount Applied: Rs.%.2f\n", discount);
    }

    return 0;
}