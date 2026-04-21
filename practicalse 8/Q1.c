#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter five integers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You have entered : ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\nLargest and smallest number :");

    for (int i = 0; i < 5; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            printf("%d", arr[i]);
        }
       
    }
   

    return 0;
}
