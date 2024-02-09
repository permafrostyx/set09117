#include <stdio.h>

int main()
{
//make array with grades
	int grades[6] = { 1, 2, 3, 4, 5, 6 };
//array byte size
	printf("%zu bytes\n", sizeof(grades));
//how many ints can fit in it
	printf("space for storing %zu elements\n", sizeof(grades)/sizeof(int));
//print grades
	printf("y1 grades are: %zu, %zu, %zu, %zu, %zu, %zu\n",grades[0],grades[1],grades[2],grades[3],grades[4],grades[5]);
//new array
	int grades2[13];
//move stuff over
	for (int i = 0; i < 6; i++){
		grades2[i] = grades[i];
	}
//y2 and matric
	grades[6] = 7;
	grades[7] = 8;
	grades[8] = 9;
	grades[9] = 10;
	grades[10] = 11;
	grades[11] = 12;
	grades[12] = 40000000;
//array byte size for grades 2
	printf("%zu bytes\n", sizeof(grades2));
//how many ints can fit in it
	printf("space for storing %zu elements\n", sizeof(grades2)/sizeof(int));
//print grades
	printf("for student %zu y1 grades are: %zu, %zu, %zu, %zu, %zu, %zu\ny2 grades are %zu, %zu, %zu, %zu, %zu, %zu\n",grades[12],grades[0],grades[1],grades[2],grades[3],grades[4],grades[5],grades[6],grades[7],grades[8],grades[9],grades[10],grades[11]);
//exit program
	return 0;
}