#include <stdio.h>
int main()
{
    int age, salary, credit_score;
    printf("Enter age : ");
    scanf("%d", &age);
    if (age >= 21)
    {
        printf("Enter salary : ");
        scanf("%d", &salary);
        if (salary >= 25000)
        {
            printf("Enter credit score : ");
            scanf("%d", &credit_score);
            if (credit_score >= 700)
            {
                printf("Loan Approved !");
            }
            else
            {
                printf("Loan Denied!");
            }
        }
        else
        {
            printf("Loan Denied!");
        }
        
    }
    else
    {
        printf("Loan Denied!");
    }
    return 0;
}
