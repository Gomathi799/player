#include<stdio.h>
void main()
{
    int n,i,k,j,l=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
          for(j=2;j<=i/2;j++)
          {
              if(i%j==0)
              {
                  l++;
                  break;
              }
          }
          if(l==0)
          printf("%d ",i);
        }
    }
}
