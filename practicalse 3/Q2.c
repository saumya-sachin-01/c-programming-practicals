#include <stdio.h>
int main()
{
    int employee_id;
    char employee;
    float basic_salary, HRA, DA, TA, Gross_Salary, Tax, Net_Salary;
    printf("-----------------------------------------\n");
    printf("           SALARY SLIP\n");
    printf("-----------------------------------------\n");
    printf("Employee : ");
    scanf("%s", &employee);
    printf("Employee ID : ");
    scanf("%d", &employee_id);
    printf("-----------------------------------------\n");
    printf("Basic Salary : ");
    scanf("%f", &basic_salary);
    HRA = 0.20 * basic_salary;

    DA = 0.15 * basic_salary;

    TA = 0.10 * basic_salary;

    Gross_Salary = basic_salary + HRA + DA + TA;

    Tax = 0.05 * Gross_Salary;

    Net_Salary = Gross_Salary - Tax;

    printf("HRA (20%%) : %.0f\n", HRA);
    printf("DA (15%%) : %.0f\n", DA);
    printf("TA (10%%) : %.0f\n", TA);
    printf("-----------------------------------------\n");
    printf("Gross Salary : %.0f\n", Gross_Salary);
    printf("Tax (5%%) : %.0f\n", Tax);
    printf("Net Salary : %.0f\n", Net_Salary,Gross_Salary,Tax);
    printf("-----------------------------------------\n");
    return 0;
}