 #include <stdio.h>
int main() {
    float principal, rate, time, simple_interest;

    
    printf("Enter principal amount (Rs.): ");
    scanf("%f", &principal);

    printf("Enter rate of interest (%% per annum): ");
    scanf("%f", &rate);

    printf("Enter time (years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

   
    printf("Simple Interest: Rs.%.2f\n", simple_interest);

    return 0;
}