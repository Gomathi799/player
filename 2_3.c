#include<stdio.h>
void main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        s=s+(r*r);
        n=n/10;
    }
    printf("%d",s);
}
