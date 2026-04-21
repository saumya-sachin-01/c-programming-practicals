#include <stdio.h>
int main()
{
    float account_number, initial_balance, deposit_amount, withdrawal_amount, final_balance, interest, total_balance;
    char account_holder;
    printf("------------------------------------------------------\n");
    printf("                 BANK ACCOUNT STATEMENT\n");
    printf("------------------------------------------------------\n");
    printf("Account Holder : ");
    scanf("%s", &account_holder);
    printf("Account Number : ");
    scanf("%f", &account_number);
    printf("------------------------------------------------------\n");
    printf("Initial Balance : ");
    scanf("%f", &initial_balance);
    printf("Deposit Amount : ");
    scanf("%f", &deposit_amount);
    printf("Withdrawal Amount : ");
    scanf("%f", &withdrawal_amount);
    printf("------------------------------------------------------\n");
    final_balance = initial_balance + deposit_amount - withdrawal_amount;
    printf("Final Balance : %.0f\n", final_balance);
    interest = 0.04 * final_balance;
    printf("Interest (4%%) : %.0f\n", interest);
    printf("------------------------------------------------------\n");
    total_balance = final_balance + interest;
    printf("Total Balance : %.0f\n", total_balance);
    printf("------------------------------------------------------\n");
    return 0;
}