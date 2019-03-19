#include<stdio.h>
void main()
{
    char a[10000];
    int i,j,n,c=0,b=0,x;
    scanf("%[^\n]",a);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                c++;
            }
            if(c>b)
            {
             c=b;
             x=i;
            }
        }
    }
    printf("%c",a[x]);
}
