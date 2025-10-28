/*
Name: Clinton Ochieng
Registration no:PA106/G/28797/25
Description:2D array
*/
#include <stdio.h>
int main () {
	int i,j;
	
	
	
	int occupancy[5][10] = {
	{1,1,0,1,1,1,1,1,0,0},
	{0,1,1,1,1,1,1,1,0,1},
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,1,1,1,0,1},
	{1,1,1,1,1,1,1,1,0,0}				
        
	};
	for(i=0;i<5;i++){
		for(j=0;j<10;j++){
			printf ("%d \t", occupancy[i][j]);
		}
		printf ("\n");

	}
	
	
	return 0;
}