/*
Name: Clinton OChieng
Reg No: PA106/G/28797/25
Description: Finding the volume & surface area of a cylinder
volume = PI *radius *radius * height
Surface_area = 2* PI * radius *radius + 2* PI *radius *height
pi =3.142
*/

#include <stdio.h>
#define PI 3.142

int main () {
	float radius,height,volume,surface_area;
	
	printf ("Enter height of the cylinder: \n");
	scanf("%f", &height);
	
	printf ("Enter radius of the cylinder: \n");
	scanf ("%f", &radius);
	
	volume =PI*radius*radius*height;
	surface_area =2*PI*radius*radius+2*PI*radius*height;
	
	printf ("The volume of the cylinder is %.3f \n",volume);
	printf ("The surface area of the cylinder is %.3f \n", surface_area);
	
	return 0;
}
	
	
	
	
	
	
	