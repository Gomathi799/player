#include<stdio.h>
void main()
{
    char a[100000],b[100000];
    int i,k,n,m,l=0;
    scanf("%s%s",a,b);
    scanf("%d",&k);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;b[i]!='\0';i++);
    m=i;
    if(n==m)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                l++;
            }
        }
    }
    if(k==l)
    printf("yes");
    else
    printf("no");
}
