#include<stdio.h>
void main()
{
    int i,a,b,l=0;
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==0||b==0)
        {
            l++;
        }
    }
    if(l==3)
    printf("yes");
    else
    printf("no");
}
