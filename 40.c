#include<stdio.h>
void main()
{
int n,a,b,c=0,i;
scanf("%d",&n);
for(i=0;i<=n/2;i++)
{
    a=i*2;
    if(a<=n)
    {
    c++;
    }
    else
    {
    break;
    }  
    
}
printf("%d",c);
}
