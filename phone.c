#include <stdio.h>
/* Luka Banjanin
 * 250968309
 * this code will ask the user to inout a 10 digit phone number and will format their phone number according to the option they select from the format menu */
int main () {

	int x,y,z,r,c;

	printf("Input Phone Number ");
	r = scanf("%3d%3d%4d", &x, &y, &z);
	if (r != 3){ 
	printf("Invalid phone number!\n");
	return(1);
}
// cleares the input buffer
	while ((getchar()) != '\n');
	printf("Format Options\n A) Local\n B) Domestic\n C) International\n D) Odd\n\n Input Option: ");
	c = getchar();
//case matching to indicate format of output
	switch (c) {
		case 'a':
		case 'A': printf("\nPhone Number: %d - %d\n", y, z);
			  break;
		case 'b':
		case 'B': printf("\nPhone Number: (%d) %d - %d\n", x, y, z);
			  break; 
		case 'c':
		case 'C': printf("\nPhone Numebr: +1-%d-%d-%d\n", x, y, z);
			  break;
		case 'd':
		case 'D': printf("\n0%d 0%d %d\n", x, y, z);	
			  break;

		default: printf("\nError invalid option!\n");
			  break;
	}
	return (0);
}

