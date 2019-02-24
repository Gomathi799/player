#include<stdio.h>
void main()
{
    char a[100000],b[1000];
    int i,n=0,j;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
        if(a[i]==b[j])
        {
            n++;
        }
        }
    }
    if(n>0)
    printf("yes");
    else
    printf("no");
}
