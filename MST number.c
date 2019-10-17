#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	// Inputs 
	srand(time(NULL));   // Initialization, should only be called once.
	int a, b = 1;
	int r = rand() % 100;

	printf("we chosed a a number for you between 99 and 0.\nType a number\n");
	scanf_s("%d", &a);
	//Comparision
	while (a != r) {
		if (a > r) {
			printf("the number you chosed is Bigger than the number we chosed for you\nChoose again\n");
			scanf_s("%d",&a);
		}
		else if (a < r) {
			printf("the number you chosed is Smaller than the number we chosed for you\nChoose again\n");
			scanf_s("%d",&a);
		}
		b += 1;
	}
	//finishing the program
	printf("Congratulation You Find the Win number : %d\n You've find it after %d tries '", r, b);
	return 0;
}