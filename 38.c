#include<stdio.h>
void main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if(i%2==0)
            {
                printf("%d ",i);
            }
        }
    }
}
