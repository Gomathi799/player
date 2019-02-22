#include<stdio.h>
void main()
{
    char a[100000];
    int i,j,n=0,l=0;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            l++;
        }
        if(l>1)
        {
            if(a[i]!=' ')
            printf("%c",a[i]);
        }
        else
        printf("%c",a[i]);
    }
}
