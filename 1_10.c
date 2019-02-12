#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,k=0,n=0,m=0;
    scanf("%s%s",&a,&b);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;b[i]!='\0';i++);
    m=i;
    if(m==n)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                k++;
            }
        }
    }
    if(k==(n-1))
    printf("yes");
    else
    printf("no");
}
