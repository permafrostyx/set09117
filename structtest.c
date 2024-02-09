#include <stdio.h>

//make struct
typedef struct
{
	int id;
	char name[30];
} employee;

int main()
{
	//make employee
	employee e1 = {1, "simon"};
	//print details
	printf("ID: %d\nName: %s\n", e1.id, e1.name);
	//print size
	printf("%zu %zu %zu \n", sizeof(e1.id), sizeof(e1.name), sizeof(e1));
	return(0);
}