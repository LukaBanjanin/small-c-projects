#include <stdio.h>
/* luka Banjanin
250968309
this code asks the user to input an integer value and gives them the most efficient combination of 20,10,5,2, and 1 dollar bills*/

void pay_amount(int input, int *twenty, int *ten, int *five, int *two, int *one);

int main(void){

	int input = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0, r;
	printf("Enter a dollar amount: ");
	r = scanf("%d", &input);
//error checking
	if ( input < 0 || r != 1) {
	printf("Error something went wrong wiht your input");
	return 1; 
    }
	else pay_amount(input, &twenty, &ten, &five, &two, &one);

	printf("$20 bills = %d\n$10 bills = %d\n $5 bills = %d\n $2 bills = %d\n$1 bills = %d\n", twenty, ten, five, two, one);
 return 0; 
}
//function to calculate the most efficient distribution of bills 

void pay_amount(int input, int *twenty, int *ten, int *five, int *two, int *one){
    int tmp = input;
	*twenty = (tmp - (tmp % 20)) / 20;
    tmp -= (*twenty) * 20;
	*ten = (tmp - (tmp % 10)) / 10;
    tmp -= (*ten) * 10;
	*five = (tmp - (tmp % 5)) / 5;
    tmp -= (*five) * 5;
	*two = (tmp - (tmp % 2)) / 2;
    tmp -= (*two) * 2;
	*one = tmp;



}