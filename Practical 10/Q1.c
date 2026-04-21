#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient {
    int Patient_ID;
    char Name[50];
    int Age;
    char Disease[50];
};

int main() {
    struct Patient p[5];
    FILE *fp;
    int i, searchID, found = 0;

    // Step 1: Accept 5 patient records
    printf("Enter details of 5 patients:\n");
    for (i = 0; i < 5; i++) {
        printf("\nPatient %d:\n", i + 1);
        printf("Enter Patient ID: ");
        scanf("%d", &p[i].Patient_ID);
        printf("Enter Name: ");
        scanf("%s", p[i].Name);
        printf("Enter Age: ");
        scanf("%d", &p[i].Age);
        printf("Enter Disease: ");
        scanf("%s", p[i].Disease);
    }

    // Step 2: Write records into Patients.txt
    fp = fopen("Patients.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    for (i = 0; i < 5; i++) {
        fprintf(fp, "%d %s %d %s\n", p[i].Patient_ID, p[i].Name, p[i].Age, p[i].Disease);
    }
    fclose(fp);

    // Step 3: Display all records
    printf("\nAll Patient Records:\n");
    fp = fopen("Patients.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    while (fscanf(fp, "%d %s %d %s", &p[0].Patient_ID, p[0].Name, &p[0].Age, p[0].Disease) != EOF) {
        printf("ID: %d, Name: %s, Age: %d, Disease: %s\n", p[0].Patient_ID, p[0].Name, p[0].Age, p[0].Disease);
    }
    fclose(fp);

    // Step 4: Search by Patient_ID
    printf("\nEnter Patient ID to search: ");
    scanf("%d", &searchID);

    fp = fopen("Patients.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    while (fscanf(fp, "%d %s %d %s", &p[0].Patient_ID, p[0].Name, &p[0].Age, p[0].Disease) != EOF) {
        if (p[0].Patient_ID == searchID) {
            printf("\nRecord Found:\n");
            printf("ID: %d, Name: %s, Age: %d, Disease: %s\n", p[0].Patient_ID, p[0].Name, p[0].Age, p[0].Disease);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nNo record found with Patient ID %d\n", searchID);
    }
    fclose(fp);

    return 0;
}