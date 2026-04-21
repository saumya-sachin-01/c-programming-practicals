#include <stdio.h>

int main() {
    int marks;
    float income;

    printf("Enter marks: ");
    scanf("%d", &marks);

    printf("Enter family income (Rs.): ");
    scanf("%f", &income);

  
    if (marks >= 85) {
        if (income < 500000) {
            printf("Full Scholarship\n");
        } else {
            printf("Not Eligible\n");
        }
    } else if (marks >= 70) {
        if (income < 800000) {
            printf("Half Scholarship\n");
        } else {
            printf("Not Eligible\n");
        }
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}