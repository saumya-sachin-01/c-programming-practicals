#include <stdio.h>
int main()
{
    int ticket_price, number_of_tickets, subtotal, GST, service_charge, final_amount;
    char movie_name;
    printf("          TICKET SUMMARY             \n");
    printf("Movie Name   :  ");
    scanf("%s", &movie_name);
    printf("Number of Tickets  :  ");
    scanf("%d", &number_of_tickets);
    printf("Ticket Price   :  ");
    scanf("%d", &ticket_price);
    subtotal = ticket_price * number_of_tickets;
    printf("Subtotal   :  %d\n", subtotal);
    GST = 0.18 * subtotal;
    printf("GST (18%%)   :  %d\n", GST);
    service_charge = 15 * number_of_tickets;
    printf("Service Charge (Rs. 15 per ticket)   :  %d\n", service_charge);
    printf("---------------------------------------------------------------\n");
    final_amount = subtotal + GST + service_charge;
    printf("Total Amount    :   %d\n", final_amount);
    return 0;
}