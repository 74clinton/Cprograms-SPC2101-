/*
Name: Clinton Ochieng
Reg No: PA106/G/28797
Description: Program to find whether student is eligible to sit for exams or not
*/

#include <stdio.h>

int main () {
	//variable declaration
	float attendance, avarage_marks;
	
	//prompt the user to enter values
	printf ("Enter your attendance: \t");
	scanf ("%f", &attendance);
	
	printf ("\n Enter your avarage marks: \t");
	scanf ("%f", &avarage_marks);
	
	if (attendance >= 75 && avarage_marks >= 40){
		printf ("Eligible.");
	}
	else {
		printf ("Not eligible.");
		return 0;
	}
}