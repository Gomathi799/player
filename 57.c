#include<stdio.h>
void main()
{
    char a[100000],b[1000];
    int i,n;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[0])
        {
            n++;
        }
    }
    printf("%d",n);
}
