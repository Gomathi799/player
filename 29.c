#include<stdio.h>
void main()
{
    int a,b,n=0,i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(j*j==i)
            {
                n++;
            }
        }
    }
    printf("%d",n);
}
