#include<stdio.h>
void main()
{
    int n,a[10000],i,j,k=0,m=1;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                m++;
            }
        }
        if(m==k)
        {
        printf("%d",a[i]);
        break;
        }
    }
}
