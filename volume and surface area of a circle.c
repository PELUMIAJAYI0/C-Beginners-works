//program to find the volume and surface area of  a cylinder
//volume of a cylinder = pi*r*h
//surface_area of a cylinder = 2*pi*r*h

#include<stdio.h>
#define pi 3.142

int main()
{
	float radius;
	float height;
	float volume;
	float surface_area;
	
	printf("Input the radius of the circle--> ");
	scanf("%f", &radius);
	
	printf("Input the height of the circle--> ");
	scanf("%f", &height);
	
	volume = pi*radius*height;
	surface_area = 2*pi*radius*height;
	
	printf("The volume of the cylinder is ---> %.2f\n", volume);
	printf("The surface_area of the circle is ---> %.2f\n", surface_area);
	
	return 0;
	
}
