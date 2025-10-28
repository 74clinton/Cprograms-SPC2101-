/*
Name: Clinton Ochieng
Registration no:PA106/G/28797/25
Description:3D array
*/
#include <stdio.h>
int main (){
	int i,j,k;
	int sum =0;
	int chain[3][5][10]= {
	{
	{1,1,1,0,1,1,0,1,1,1},
	{1,1,1,0,1,1,1,1,0,1},	
	{1,1,1,0,1,0,1,1,0,1},
	{1,1,1,0,0,1,1,1,1,1},
    {1,1,1,1,0,1,1,1,0,1}
	},	
	{
	{1,1,1,0,1,0,1,1,0,1},	
	{1,1,1,1,0,0,1,1,0,1},
    {1,1,1,0,0,1,1,1,0,0},
    {1,0,1,0,0,0,1,1,0,1},	
    {0,1,1,0,0,0,1,1,0,1}	
    },
    {
	{1,1,1,0,1,0,1,0,0,1},
	{1,1,1,1,1,0,1,0,1,1},
	{0,0,1,0,1,1,1,0,1,0},
	{1,0,1,1,1,0,0,0,1,1},	
	{1,1,0,0,1,0,1,0,1,1}		
	},
};

for (i=0;i<3;i++){
	for(j=0;j<5;j++){
		for(k=0;k<10;k++){
			printf("%d \t",chain[i][j][k]);
			sum=sum + chain[i][j][k];
		}
		printf ("\n");
	}
	printf ("\n");
	
}
printf ("\n The number of occupied rooms across all branches is %d", sum);

return 0;
}