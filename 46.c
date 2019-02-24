#include <stdio.h>
#include<math.h>
#define pi 3.14
void main() {
	int n;
	float a;
	scanf("%d",&n);
	a=sin(n*pi/180);
	printf("%.1f",a);
}
