/*
Name: Clinton Ochieng;
Reg no: PA106/G/28797/25
Description: A program to calculate water bill
*/

#include <stdio.h>
int main () {
	float units, total_bill, water_bill;
	
	printf ("Enter the number of water units consumed: \t");
	scanf ("%f", &units);
	
	if (units <=30){
		water_bill = 20 * units;
	}
	else if (units > 30 && units <= 60) {
		water_bill = 25 * units;
	}
	else {
		water_bill = 30 * units; 		
	
	}
	
	total_bill = water_bill + 0;
	
	printf ("The number of water unit consumed is %.2f", units);
	printf ("\n The water bill is %.2f", water_bill);
	printf ("\n Total bill:%.2f KES",total_bill);
	
	return 0;
}