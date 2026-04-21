#include <stdio.h>
#include <string.h>

void checkPalindrome(char names[][50], int n) {
    printf("\nPalindromes:\n");
    for (int i = 0; i < n; i++) {
        int len = strlen(names[i]);
        int isPal = 1;
        for (int j = 0; j < len / 2; j++) {
            if (names[i][j] != names[i][len - 1 - j]) {
                isPal = 0;
                break;
            }
        }
        if (isPal) printf("- %s\n", names[i]);
    }
}

void displayLongNames(char names[][50], int n) {
    printf("\nNames > 10 chars:\n");
    for (int i = 0; i < n; i++) {
        if (strlen(names[i]) > 10) {
            printf("- %s\n", names[i]);
        }
    }
}

int main() {
    int n, i;
    char names[20][50];

    printf("Enter number of passengers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    checkPalindrome(names, n);
    displayLongNames(names, n);

    return 0;
}