#include<stdio.h>
void main()
{
    int a,b,i,j,f=0,c,d;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        for(j=1;j<a;j++)
        {
            d=i*j;
            c=2*(i+j);
            if(a==c&&b==d)
            {
                f=1;
            }
        }
            
    }
    if(f==1)
    printf("yes");
    else
    printf("no");
}
