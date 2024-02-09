//including functions and stuff
#include <stdio.h>
//main program
int main()
{
	//variables
	int integerVariable;
	long int int2;
	char char1;
	double double1;
	//printing size of variables
	printf("size of integer variable is %zu bytes\n", sizeof(integerVariable));
	printf("size of long integer variable is %zu bytes\n", sizeof(int2));
	printf("size of char variable is %zu bytes\n", sizeof(char1));
	printf("size of double variable is %zu bytes\n", sizeof(double1));
	//exiting program
	return 0;
}