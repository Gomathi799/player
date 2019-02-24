#include<stdio.h>
void main()
{
    char a[100000];
    int n,i,j;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        if(i%3==0)
        printf("%c",a[i]);
    }
}
