#include <stdio.h>

int main()
{
    int guess;
    int secret_password = 1234;
    int attempts = 3;

    while (attempts > 0)
    {
        printf("Enter numeric password: ");
        scanf("%d", &guess);

        if (guess == secret_password)
        {
            printf("Access Granted\n");
            return 0;
        }
        else
        {
            attempts--;
            printf("Wrong password! Attempts left: %d\n", attempts);
        }
    }

    printf("Account Locked\n");
    return 0;
}