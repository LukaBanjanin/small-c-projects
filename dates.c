#include <stdio.h>
/*Luka Banjanin
 * 250968309
 * this code asks the user to keep inputting dates until they input 0/0/0 and then it returns to them the largest date they provided
 */
int main(void) {
	
// declare all int variables
	int m,d,y,r,monthMAX = 0, dayMAX = 0, yearMAX = 0;
	do {
	printf("Enter a date (mm/dd/yyyy) (or enter 0/0/0 when you are done entering dates and wish to see the largest date you entered):  ");
	r = scanf("%d/%d/%d", &m, &d, &y);
//start the error checking
	if (r != 3)
		printf("Invalid Date Format!\n");
	else if (m < 0 || m > 12)
		printf("Invalid Month Number\n");
	else if (d < 0 || d > 31)
		printf("Invalid Day Number\n");
	else if (y < 0 || y > 9999)
		printf("Invalid Year Number\n");
	//start comparing the dates
	else if (y > yearMAX) {
		yearMAX = y;
		dayMAX = d;
		monthMAX = m;
	}
	else if (y == yearMAX && m > monthMAX) {
		yearMAX = y;
		dayMAX = d;
		monthMAX = m;
	}
	else if (y == yearMAX && m == monthMAX && d > dayMAX) {
		yearMAX = y;
		dayMAX = d;
		monthMAX = m;
	}

	} while (m != 0 && d != 0 && y != 0);
	printf("%d/%d/%d is the latest date \n", monthMAX, dayMAX, yearMAX);
}
