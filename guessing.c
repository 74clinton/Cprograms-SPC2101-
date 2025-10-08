/*
Name:Clinton Ochieng
Reg No:PA106/G/28797/25
Desription:Program to display secret number
*/

#include <stdio.h>
int main () {
		int secretNumber = 9;		
		int guess;
		
	printf("Welcome to the Number Guessing Game: \n");
    printf("Pick a number between 1 and 20: \n");		
	
// Loop until the player guesses the correct number
		
    do {
        printf("Enter your guess: ");  //prompt the user to enter his/her guess
        scanf("%d", &guess);
        
        if (guess > secretNumber) {
            printf("Too high \n");
        } else if (guess < secretNumber) {
            printf("Too low \n");
        } else {
            printf("Congratulations! You guessed it right.\n");
        }
    
	}while (guess != secretNumber); 
		
	
	
	 return 0;	
}	