#include <stdio.h>
#include<string.h>
void removeextraspaces(char str[])
{
    int i = 0, j = 0;
    // for initial spacing
    while (str[i] == ' ')
        i++;
    // for inbetween spacing
    while (str[i] != '\0')
    {
      if (!(str[i] == ' ' && str[i + 1] == ' '))
            {
                str[j] = str[i];
                j++;
            }
            i++;
        }
    
    // for last spaces
    while (j > 0 && str[j - 1] == ' ')
    {
        j--;
        str[j] = '\0';
    }
}

    int wordcount(char str[])
    {
        int i,count=0;
        for(i=0;str[i]!='\0';i++){
            if(i==0&&str[i]!=' '||str[i]==' '&&str[i+1]!=' '&&str[i+1]!='\0'){
                count++;
            }
        }
        return count;
    }

int main()
    {
        char comment[500];
        printf("Comment : \n");
        gets(comment);
        removeextraspaces(comment);
        printf("\nCleaned comment : %s",comment);
        printf("\nWordcount : %d",wordcount(comment));
        return 0;

    }
