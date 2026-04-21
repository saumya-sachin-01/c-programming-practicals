#include <stdio.h>
int main() {
    int age;
    float ticket_price, discount = 0.0, payable_amount;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter ticket price (Rs.): ");
    scanf("%f", &ticket_price);

    if (age >= 60) {
        discount = 0.35 * ticket_price;
        printf("Category: Senior Citizen\n");
    } else if (age <= 25) {
        discount = 0.17 * ticket_price;
        printf("Category: Student\n");
    } else {
        printf("Category: Regular\n");
    }

    payable_amount = ticket_price - discount;

    printf("Ticket Price: Rs.%.2f\n", ticket_price);
    printf("Discount: Rs.%.2f\n", discount);
    printf("Payable Amount: Rs.%.2f\n", payable_amount);

    return 0;
}
