/*
Name:Clinton Ochieng
Reg no:PA106/G/28797/25
Description: Program to display loan request from a bank
*/

#include <stdio.h>
int main() {
  //Variable declaration
	  char name[]={}; //%s
	  int age ; //%d
	  float income; //%f
	  double loan; //%lf
//Prompt the user to enter the value of each variable
     printf("Please enter your name:");
     scanf("%s",&name);
     
      printf("Please enter the value of age:");
      scanf("%d",&age);
      
      if(age>21){
      printf("You are above 21 years old /n",loan);
	  printf("You qualify for the loan /n", loan);} else{
	  	
      if(age<21);
	  printf("You are less than 21 years old /n,",loan);       
	  printf("Unfortunately we are unable to offer you a loan at this time /n",loan);
	  return 0; }
      
       printf("Please enter the value of your annual income:");
       scanf("%f",&income);
       printf("Your income is Ksh %.2f", income);
       
        if(income>=21000);{
    	 printf("Your annual income is atleast 21000. /n");}
       printf("Your income is Ksh. %.2f",income);
	      	
       printf("Please enter the value of loan request:");
       scanf("%lf",&loan);
      
//Print output to the user screen
      printf("Your name is %s /n",name);
	  printf("The value of your age is %d years /n",age); 
	  printf("The value of your income is Ksh %.2f /n", income);	       
      printf("You qualify for the loan /n",loan); 
      
//Display loan
      printf("loan is Ksh.%lf",loan);
     
return 0;
}     
	  