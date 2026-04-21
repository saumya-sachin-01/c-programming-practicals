#include <stdio.h>
int main()
{
    int menu, amt = 0, dept_amt, final_amt, with_amt, total_amt;

    printf(" Menu: \n");

    printf("1. Balance Inquiry\n");

    printf("2. Deposit Amount\n");

    printf("3. Withdraw Amount (Check sufficient balance)\n");

    printf("4. Exit\n");

    printf("Enter menu nummber : ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Available Balance : %d", amt);
        break;

    case 2:
        printf("Deposit Amount : ");
        scanf("%d", &dept_amt);
        amt = amt + dept_amt;
        printf("Total Balance : %d", amt);
        break;

    case 3:
        printf("Withdrawal Amount : ");
        scanf("%d", &with_amt);
        if (amt == 0)
        {
            printf("Insufficient Balance!");
        }
        else
        {
            total_amt = amt - with_amt;
            printf("Total Balance : %d", with_amt);
        }
        break;

    case 4:
        printf("Exit\n");
        return 0;
    }
}