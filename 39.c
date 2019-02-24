#include<stdio.h>
void main()
{
    int n,i,j,f=0,p=1;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        j=i;
        while(j)
        {
            p=2*p;
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
