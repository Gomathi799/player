#include<stdio.h>
void main()
{
    char a[100000];
    int n,k,i,j;
    scanf("%s",a);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=n-k;i<n;i++)
    printf("%c",a[i]);
    for(i=0;i<n-k;i++)
    printf("%c",a[i]);
}
