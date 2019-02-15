#include<stdio.h>
void main()
{
    char a[100000];
    int n=0,i,k=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    n++;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
        k++;
        }
        else
        {
            printf("%c",a[i]);
        }
    }
}
