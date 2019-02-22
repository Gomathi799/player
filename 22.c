#include<stdio.h>
void main()
{
    int a,b,m=0,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    m=b;
    else
    m=a;
    for(i=m;i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}
