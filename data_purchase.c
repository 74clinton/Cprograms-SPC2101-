/*
Name: Clinton Ochieng
Reg No: PA106/G/28797/25
Desription: A program to display mobile data bundle purchase
*/

#include <stdio.h>
int main () {
	int choice;
	
	printf ("1. 100 MB @ 50 KES \n");
	printf ("2. 500 MB @ 200 KES \n");
	printf ("3. 1 GB @ 350 KES \n");
	printf ("4. 2 GB 600 KES");
	
	printf ("\n Enter the choice of data bundle you need (1-4): \t");
	scanf ("%d",&choice);
	
	switch (choice) {
		case 1:
			printf ("\n You selected 100 MB. Cost = 50 KES");
			break;
		case 2:
			printf ("\n You selected 500 MB. Cost = 200 KES");
			break;
		case 3:
			printf ("\n You selected 1 GB. Cost = 350 KES");
			break;
		case 4:
			printf ("You selected 2 GB. Cost = 600 KES");
			break;
		
		default:
			printf ("\n Invalid choice");
		
	}
	return 0;
}