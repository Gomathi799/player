#include<stdio.h>
void main()
{
    int a[100000],n,i,j,k,m=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
        m++;
        }
    }
    if(n==m)
    printf("yes");
    else
    printf("no");
}
