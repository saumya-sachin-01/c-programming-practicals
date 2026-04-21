#include <stdio.h>
int main()
{
    int menu, r, side, l, b, s1, s2, s3;
    float p_c, p_s, p_r, p_t;
    printf("Menu:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("4. Triangle\n");
    printf("Enter menu number : ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("Enter radius : ");
        scanf("%d", &r);
        p_c = 2 * 3.14 * r;
        printf("Perimeter of circle : %.2f", p_c);

        break;
    case 2:
        printf("Enter side : ");
        scanf("%d", &side);
        p_s = side * side;
        printf("Perimeter of square : %.2f", p_s);

        break;
    case 3:
        printf("Enter length : ");
        scanf("%d", &l);
        printf("Enter breadth : ");
        scanf("%d", &b);
        p_r = 2 * (l + b);
        printf("Perimeter of rectangle : %.2f", p_r);
        break;
    case 4:
        printf("Enter first side : ");
        scanf("%d", &s1);
        printf("Enter second side : ");
        scanf("%d", &s2);
        printf("Enter third side : ");
        scanf("%d", &s3);
        p_t = s1 + s2 + s3;
        printf("Perimeter of triangle : %.2f", p_t);
        break;
    }
    return 0;
}