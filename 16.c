#include<stdio.h>
void main()
{
    char a[10000];
    int i,j,n,c=0,b=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int f=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                a[j]='$';
                f=1;
            }
        }
        if(f==1)
        a[i]='$';
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='$')
        printf("%d ",a[i]);
    }
}
