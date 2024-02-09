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
	//gets start time
	printf("start: %d \n", (int) (t=clock()));
	//run spammy code
	for(int i=0; i<10; i++)
	{
	code();
	}
	//gets difference in ticks
	printf("stop: %d \n", (int) (t=clock()-t));
	//print elapsed time in seconds
	printf("average elapsed: %f seconds\n", ((double) t / CLOCKS_PER_SEC)/10);
	
	return 0;
}