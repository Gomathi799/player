#include<stdio.h>
void main()
{
    char a[100000],b[10000];
    int n,m,i,j,k=0;
    scanf("%s%s",a,b);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;b[i]!='\0';i++);
    m=i;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[i]==a[j])
            {
              k++;  
            }
        }
    }
    if(k==m)
    printf("yes");
    else
    printf("no");
}
