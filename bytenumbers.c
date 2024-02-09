//including functions and stuff
#include <stdio.h>
//main program
int main()
{
	//int variable
	int integerVariable;
	//variable to store result of sizeof
	size_t size;
	//getting size of int variable
	size = sizeof(integerVariable);
	//printing that
	printf("size of integer variable is %zu bytes\n", size);
	//exiting program
	return 0;
}