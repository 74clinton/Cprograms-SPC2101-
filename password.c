/*
Name:Clinton Ochieng
Reg No:PA106/G/28797/25
Desription:Program to prompt the user to keep entering his password till the correct one is entered
*/

#include <stdio.h>

int main () {
	int password = 1234;
	int input;
	
	do {
		printf ("Enter password: ");
		scanf ("%d", &input);
		
		
		if (input != password) {
			printf ("Incorrect password.Try again. \n");
		}
	}while (input != password);
	
	printf ("Access Granted \n");
	
	return 0;
}