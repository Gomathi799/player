#include<stdio.h>
void main()
{
    int n,a[10000],i,j,l=0,k,b[1000],m=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    scanf("%d",&b[i]);
    for(j=0;j<k;j++)
        {
            m=0;
            a[n]=b[j];
            n++;
            for(i=0;i<n;i++)
            {
                if(a[i]>m)
                {
                    m=a[i];
                }
            }
            printf("%d ",m);
        }

}
