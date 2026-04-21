#include <stdio.h>
int main()
{
    int option, i,slots = 10;
    do
    {
        printf("Options:\n");
        printf("1. Park Car\n");
        printf("2. Remove Car\n");
        printf("3. Show Available Slots\n");
        printf("4. Exit\n");

        printf("Enter option number : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("1. Park Car\n");
            printf("Total available slots = %d\n", slots);
            for ( i = slots; i >= 0; i--)
            {
            }
            if (i == 0)
                {
                    printf("Parking lots full!!\n");
                }
                else
                {
                    printf("Parked !!\n");
                }
               
            
             slots = slots - 1;

            break;
        case 2:
            printf("2. Remove Car\n");
            printf("Total available slots = %d\n", slots); 
            for ( i = 1; i <= slots; i++)
            {}
                if (slots == 10)
                {
                    printf("Parking lot is empty!!\n");
                }
                else
                {
                    printf("Removed!!\n");
                }
                
            
             slots = slots + 1;
            break;
        case 3:
            printf("3. Show Available Slots\n");
            printf("Available Slots : %d\n", slots);
            break;

        case 4:
            printf("Exit\n");
            return 0;

        }
    }

     while(option!=4);
  
}