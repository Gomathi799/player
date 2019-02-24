#include<stdio.h>
void main()
{
    char a[1000000],b[1000000];
    int n,i,j,k,l=0,m=0;
    scanf("%[^\n]",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++);
    n=i;
    for(i=0;b[i]!='\0';i++);
    k=i;
    for(i=0;b[i]!='\0';i++)
    {
        l=0;
        for(j=0;a[j]!='\0';j++)
        {
            if(b[i]==a[j])
            {
             l++;   
            }
        }
        if(l==k)
        {
        m++;
        }
    }
    printf("%d",m);
}
