// do-while.c
#include <stdio.h>

int main(void) {
	int age;

	printf("Welcome to __The Program__!\n");

	do {
		printf("\nEnter your age: ");
		scanf_s("%d", &age);

		if (age >= 18) {
			printf("Access granted! ");
			printf("Welcome to the SECRET section!\n");
			// break;
		}
		else if (age > 0) {
			printf("Sorry, you must be 18 or older!\n");
		}
		else {
			printf("Invalid input. Enter a positive number.\n");
		}
	} while (age <= 0); // 맞는 나이를 입력할 때까지

	printf("Program end.\n");

	getch();

	return 0;
}