#include <stdio.h>

struct Patient
{
    int id;
    char name[50];
    int age;
    char disease[50];
};

int main()
{
    struct Patient p;
    FILE *fp;
    int i, choice, searchId, found;

    fp = fopen("Patients.txt", "w");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &p.id);
        scanf("%s", p.name);
        scanf("%d", &p.age);
        scanf("%s", p.disease);

        fprintf(fp, "%d %s %d %s\n", p.id, p.name, p.age, p.disease);
    }

    fclose(fp);

    do
    {
        printf("\n1 Display All Records");
        printf("\n2 Search Patient by ID");
        printf("\n3 Exit\n");

        scanf("%d", &choice);
        printf("\nYou selected option %d\n", choice);

        if (choice == 1)
        {
            fp = fopen("Patients.txt", "r");
            while (fscanf(fp, "%d %s %d %s", &p.id, p.name, &p.age, p.disease) != EOF)
            {
                printf("%d %s %d %s\n", p.id, p.name, p.age, p.disease);
            }
            fclose(fp);
        }

        else if (choice == 2)
        {
            found = 0;
            printf("Enter Patient ID to search: ");
            scanf("%d", &searchId);

            fp = fopen("Patients.txt", "r");
            while (fscanf(fp, "%d %s %d %s", &p.id, p.name, &p.age, p.disease) != EOF)
            {
                if (p.id == searchId)
                {
                    printf("Record Found:\n");
                    printf("%d %s %d %s\n", p.id, p.name, p.age, p.disease);
                    found = 1;
                    break;
                }
            }
            fclose(fp);

            if (found == 0)
                printf("Record Not Found\n");
        }

        else if (choice == 3)
        {
            printf("You selected option 3\n");
            printf("Exiting Program\n");
        }

    } while (choice != 3);

    return 0;
}
