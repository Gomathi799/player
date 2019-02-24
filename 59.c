#include<stdio.h>
void main()
{
    int a[100000],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d",a[i]);
        }
        else
        break;
    }
}
