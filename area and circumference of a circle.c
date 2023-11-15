//program to calculate area and circumference of a circle
//area of circle= pi*r*r
//circumference of thr circle =2*pi*r

#include<stdio.h>
#define pie 3.142

int main()
{
	float radius;
	float area;
	float circumference;
	
	printf("Input radius of the circle---> ");
	scanf("%f", &radius);
	
	area = pie*radius*radius;
	circumference = 2*pie*radius;
	
	
	printf("The area of the circle is ---> %.2f\n",area);
	printf("The circumference of the circle is ---> %.2f\n",circumference);
	return 0;
}
