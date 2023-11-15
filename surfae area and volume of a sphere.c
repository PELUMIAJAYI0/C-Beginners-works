//Program to find Volume and Surface Area of Sphere
//volume of a sphere = 4*pi*r*r*r
//surface area of a sphere = 4*pi*r*r*

#include<stdio.h>
#define pi 3.142

int main()
{
   float radius;
   float volume;
   float surface_area;
   
   printf("Input radius of the circle---> ");
   scanf("%f", &radius);
   
   surface_area = 4*pi*radius*radius;
   volume = 4*pi*radius*radius*radius;
   
   printf("The Surface Area of the sphere ---> %.2f\n", surface_area); 
   printf("The Volume of the sphere ---> %.2f\n", volume);
   
   return 0;	
}
