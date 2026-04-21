#include <stdio.h>
int main()
{
    int n;
    int H, M, S, h, m, s;

    printf("Input : ");
    scanf("%d", &n);

    H = n / (60 * 60);

    M = (n % (60 * 60)) / 60;

    S = n - (H * 60 * 60) - (M * 60);

    printf("Output: %d:%d:%d (24-hour format)\n ", H, M, S, n);

    h = ( ( H + 11 ) % 12 ) + 1;

    m = M;

    s = S;


    printf("        %d:%d:%d %s (12-hour format)", h, m, s, (H/12) ? "PM" : "AM");

    return 0;
}
