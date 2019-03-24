#include<stdio.h>
void main()
{
    char a[1000];
    int b=0,c=0,d=0,e=0,f=0,i,j;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='I')
        {
            if(a[i+1]=='V')
            {
                c=4;
                i++;
            }
            else if(a[i+1]=='X')
            {
                c=9;
                i++;
            }
            else
            {
                c=1;
                i++;
            }
        }
        else
        {
        if(a[i]=='X')
        {
        b=10;
        }
        if(a[i]=='V')
        {
        d=5;
        }
        }
        e=c+d+b+e;
    }
    printf("%d",e);
}
