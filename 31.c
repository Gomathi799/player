#include<stdio.h>
void main()
{
    char a[100];
    int i,j,n=0,k=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(')
        n++;
        if(a[i]==')')
        k++;
    }
    if(n==k)
    printf("yes");
    else
    printf("no");
}
