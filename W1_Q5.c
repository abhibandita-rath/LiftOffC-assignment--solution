#include<stdio.h>
#define PI 3.141
void main()
{
	int r,di;
	float c,a;
	printf("enter the radius of circle:\n");
	scanf("%d",&r);
	di=2*r;
	printf("diameter of circle=%d\n",di);
	c=2*PI*r;
	printf("circumference of circle=%f\n",c);
	a=PI*r*r;
	printf(" area=%f\n",a);
}
