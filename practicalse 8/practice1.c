#include <stdio.h>

int main() {
    int n;
    FILE *fp;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is even\n", n);
        fp = fopen("even.txt", "a");   // ✅ correct fopen
        if (fp != NULL) {
            fprintf(fp, "%d\n", n);    // ✅ write with newline
            fclose(fp);                // ✅ close file
        } else {
            printf("Error opening even.txt\n");
        }
    } else {
        printf("%d is odd\n", n);
        fp = fopen("odd.txt", "a");    // ✅ correct fopen
        if (fp != NULL) {
            fprintf(fp, "%d\n", n);    // ✅ write with newline
            fclose(fp);                // ✅ close file
        } else {
            printf("Error opening odd.txt\n");
        }
    }

    return 0;
}