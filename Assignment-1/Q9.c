#include <stdio.h>

int main()
{
    int distance, bookingTime, seatClass, choice;
    float baseFare, finalFare;

    do
    {
        printf("\n--- Airline Ticket Fare Calculator ---\n");
        printf("Enter travel distance (in km): ");
        scanf("%d", &distance);

        if (distance <= 0)
        {
            printf("Invalid distance! Must be positive.\n");
            continue;
        }

        printf("Enter booking time (1-Early, 2-Normal, 3-Last-minute): ");
        scanf("%d", &bookingTime);

        if (bookingTime < 1 || bookingTime > 3)
        {
            printf("Invalid booking time option!\n");
            continue;
        }

        printf("Enter seat class (1-Economy, 2-Business, 3-First): ");
        scanf("%d", &seatClass);

        if (seatClass < 1 || seatClass > 3)
        {
            printf("Invalid seat class option!\n");
            continue;
        }

        baseFare = distance * 5;
        finalFare = baseFare;

        if (bookingTime == 1)
        {
            finalFare = finalFare * 0.90;
        }
        else if (bookingTime == 2)
        {
        }
        else if (bookingTime == 3)
        {
            finalFare = finalFare * 1.20;
        }

        switch (seatClass)
        {
        case 1:
            break;
        case 2:
            finalFare = finalFare * 1.30;
            break;
        case 3:
            finalFare = finalFare * 1.50;
            break;
        }

        printf("Final Ticket Fare: Rs.%.2f\n", finalFare);

        printf("\nDo you want to calculate for another customer? (1-Yes, 0-No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("Thank you for using the Airline Fare System!\n");
    return 0;
}