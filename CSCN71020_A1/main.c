#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();
void subtract();


void main() {

	printWelcomeMenu();

	printOptions();

	int inputNum;

	printf("Enter operation number: ");
	scanf_s("%1o", &inputNum);			//takes user input for what function they want to use

	switch (inputNum)
	{
	case 1:				
		add();
	case 2:					//user input chooses which case
		subtract();
	}

}

void printWelcomeMenu() {
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");
}

void printOptions() {
	printf("1. Add\n");
	printf("2. Subtract\n");
}

void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);				//user inputs the 2 numbers they would like to use in this equation
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;			//adds them
	printf("%lf + %lf = %lf\n", num1, num2, result);	
	exit(); 
}

void subtract() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);				//user inputs the 2 numbers they would like to use in this equation
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 - num2;		//subtracts them
	printf("%lf - %lf = %lf\n", num1, num2, result);
	exit();
}