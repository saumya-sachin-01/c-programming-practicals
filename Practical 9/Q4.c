#include <stdio.h>
#include <string.h>

int findAt(char email[]) {
    for (int i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') return i;
    }
    return -1;
}

int findDot(char email[]) {
    int dotPos = -1;
    for (int i = 0; email[i] != '\0'; i++) {
        if (email[i] == '.') dotPos = i;
    }
    return dotPos;
}

int checkGmail(char email[]) {
    if (strstr(email, "gmail") != NULL) return 1;
    return 0;
}

int main() {
    char email[100];
    printf("Enter email: ");
    scanf("%s", email);

    int atPos = findAt(email);
    int dotPos = findDot(email);
    int isGmail = checkGmail(email);

    if (atPos > 0 && dotPos > atPos + 1 && isGmail == 1) {
        printf("Valid Email\n");
    } else {
        printf("Invalid Email\n");
    }

    return 0;
}