#include<stdio.h>
void main()
{
    int n,i,j,k,r=0,v=0;
    char a[1000],b[1000]={'k','a','b','a','l','i'};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        for(j=0;b[j]!='\0';j++)
        {
            for(k=0;a[k]!='\0';k++)
            {
                if(b[j]==a[k])
                {
                    a[k]='$';
                    r++;
                }
            }
                if(r%6==0)
                v++;
            }
    }
    printf("%d",v);
    
}
