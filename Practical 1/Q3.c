#include<stdio.h>
#include<string.h>
int main(){
    char user[20]="Sachin";
    char pass[20]="sharma";
    int inputuser[20],inputpass[20];
    printf("Enter the User : ");
    scanf("%d",inputuser);
    if (strcmp(inputuser,user)==0)
    {
        printf("Enter the Pass word : ");
        scanf("%d",inputpass);
        if (strncmp(inputpass,"Sharma")==0)
        {
            printf("Welcome!");
        }
        
    }
    else {

        printf("Invalid!!!!!!!");
    }
    
}