#include<stdio.h>
void main()
{
    char a[1000000];
    int i;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            printf("%c",a[i]);
        }
    }
}
