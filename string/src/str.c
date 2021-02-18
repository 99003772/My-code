void str()
{
    char a[100];
    int i,j,k,b,c,l;
    
    printf("Enter a string : \n");
    scanf("%s", a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='$')
        {
            b=i;
        }
    }
    for(j=0;j<l;j++)
    {
        if(a[j]==';')
        {
            c=j;
        }
    }
    for(k=b;k<=c;k++)
    {
    printf("%c",a[k]);
}
}