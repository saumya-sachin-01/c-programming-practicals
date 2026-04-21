#include <stdio.h>
int main()
{
    int units;
    float rate, raw_bill, tax = 0.0, final_amount;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 200)
    {
        rate = 5.0;
        printf("Category: Domestic\n");
    }
    else if (units <= 500)
    {
        rate = 8.0;
        printf("Category: Commercial\n");
    }
    else
    {
        rate = 10.0;
        printf("Category: Industrial\n");
    }

    raw_bill = units * rate;

    if (raw_bill > 4000)
    {
        tax = 0.10 * raw_bill;
    }

    final_amount = raw_bill + tax;

    printf("Raw Bill: Rs.%.2f\n", raw_bill);
    printf("Tax: Rs.%.2f\n", tax);
    printf("Final Payable Amount: Rs.%.2f\n", final_amount);

    return 0;
}
