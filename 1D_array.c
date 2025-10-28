/*
Name: Clinton Ochieng
Registration no:PA106/G/28797/25
Description 1D array
*/
#include <stdio.h>
int main () {
	int i;
	int sum = 0, avarage;
    //declare and initialize the revenue
	int revenue[7] = {3000,3450,2345,4800,5435,1200,4500};
	
	// use for loop
	for(i=0;i<7;i++){
	printf ("%d \t", revenue[i]);
	sum = sum + revenue[i];
	}
	avarage = sum/7;
	
	printf ("\n The Total weekly revenue is ksh. %d", sum);
	printf ("\n The Avarage daily revenue is ksh.%d", avarage);
	
	return 0;
}