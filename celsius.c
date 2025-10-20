/*
Name:Clinton Ochieng
Reg No:PA106/G/28797/25
Description:Program to display conversion of fahrenheit to celsius
*/

#include <stdio.h>

//Function to convertt fahrenheit to celsius

     float convert_to_celsius(float fahrenheit ){
		  float celsius=(fahrenheit-32)*(5.0/9.0);
		  
return celsius;
	 }
	 
	 
int main() {
	float fahrenheit=98.6;
	float celsius=convert_to_celsius(fahrenheit);
	printf("%.1f is approximately %.2f c\n",fahrenheit, celsius);
	
return 0;
}