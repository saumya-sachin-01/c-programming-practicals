#include <stdio.h>
int main()
{
    int n;

    printf(" Enter age : ");

    scanf("%d", &n);

    if (n >= 0 && n <= 12)
    {

        printf(" CHILD \n");
    }

    else if (n > 12 && n <= 19)
    {

        printf(" Teenager \n");
    }

    else if (n > 19 && n <= 59)
    {

        printf(" Adult \n");
    }

    else
    {

        printf(" Senior Citizen \n");
    }

    return 0;
}