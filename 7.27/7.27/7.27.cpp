#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43
#include<stdio.h>

int main(void) {
	
	int b;
	int SUM;

	for (int c = 0; c > 5; c++) {
		printf("Enter a number:");
		scanf_s("%d", &b);
		SUM = +b;

		if (c != 5) {
			printf("The sum is\n", SUM);
		}
	}
}