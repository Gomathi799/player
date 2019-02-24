#include<stdio.h>
void main()
{
    int n,i,j,f=0,p=1,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<=n;i++)
    {
        j=i;
        while(j)
        {
            p=k*p;
            j--;
        }
        if(n==p)
        {
            f=1;
        }
    }
    if(f==1)
    printf("yes");
    else
    printf("no");
}
