#include<stdio.h>



int main(void) {
	
	int a;
	int i = 0;
	int Sum = 0;
	int negative = 0;
	int posative = 0;
	int g;
	int largest = 1;
	
	printf("Enter the amount of numbers you want to progress:");
	scanf_s("%d", &g);

	while ( i < g) {

		printf("Enter a number:");
		scanf_s("%d", &a);
		Sum += a;
		i++;
		if (a >= largest) {
			largest = a;
		}
		if (a > 0) {
			posative++;
		}
		if (a < 0) {
			negative++;
		}
		if (i == g) {
			printf("The sum is: %d\n", Sum);
			printf("The amount of negative numbers: %d\nThe amount of posative: %d\n", negative, posative);
			printf("The largest number of this set is: %d\n", largest);
			return 0;
		}
	}
}
