#include<stdio.h>
void main()
{
    int a[100000],n,k,i,j=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            j++;
        }
    }
    if(j>0)
    printf("yes");
    else
        {
            printf("no");
        }
        
    
}
