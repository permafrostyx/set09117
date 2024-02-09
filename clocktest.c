#include <time.h>
#include <stdio.h>

void code()
{
	//spams console with dots
	for(int i=0; i<10000; i++)
	{
		printf(".");
	}
	printf("\n");
}

int main()
{
	//tick counting variable
	clock_t t;
	//variables to keep track of times
	double times[10];
	double sum = 0.00000;
	double average;
	//gets start time
	for(int i=0; i<10; i++)
	{
		printf("start: %d \n", (int) (t=clock()));
	//run spammy code
		code();
	//gets difference in ticks
		printf("stop: %d \n", (int) (t=clock()-t));
	//store and print elapsed time in seconds
		times[i] = (double) t / CLOCKS_PER_SEC;
		printf("time elapsed: %f seconds\n", times[i]);
	//add to sum
		sum = sum + times[i];
	}
	//get average
	average = sum/10;
	//print all of it
	printf("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f",times[0],times[1],times[2],times[3],times[4],times[5],times[6],times[7],times[8],times[9],average,sum);
	return 0;
}