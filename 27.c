#include<stdio.h>
void main()
{
    char a[1000000];
    int i;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]-32;
            printf("%c",a[i]);
        }
        else if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
            printf("%c",a[i]);
        }
    }
}
