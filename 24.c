#include<stdio.h>
void main()
{
    int i,n=0,k=0;
    char a[100];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    n++;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            k++;
        }
    }
    if(n==k)
    printf("yes");
    else
    printf("no");
}
