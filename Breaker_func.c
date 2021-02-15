#include <stdio.h>
#include <stdlib.h>
void breaker(char str[128])
{
    char temp[128]={};
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='$')
            j=0;
        else if(str[i]==';')
        {
            j++;
            temp[j]=str[i];
            break;
        }
        else
            j++;
        temp[j]=str[i];
    }
    printf("%s\n",temp);
}
int main()
{
    FILE *fp=fopen("Breaker_file.txt","r");
    if(fp == NULL)
    {
        printf("Unable to open file");
        exit(0);
    }
    char str[128];
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        breaker(str);
    }
    fclose(fp);
    return 0;
}
