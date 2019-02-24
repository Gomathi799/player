#include<stdio.h>
void main()
{
    long int n;
    if(n>=-32768&&n<=32767)
    printf("INT");
    else if(n>=-2147483648&&n<=2147483647)
    printf("LONG");
    
}
