#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int sleepTIMER = 0;
	int repeat = 0;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s sleep repeat\n", argv[0]);
		return 1;
	}

	sleepTIMER = atoi(argv[1]);
	repeat = atoi(argv[2]);
	if (sleepTIMER < 0)
	{
		fprintf(stderr, "Sleep time are invalid\n");
		return 1;
	}

	while (repeat > 0)
	{
		sleep(sleepTIMER);
		fprintf(stderr, "Process %ld {*-*-* %d *-*-*} is waiting up\n", (long)getpid(), repeat);
		repeat--;
	}

	fprintf(stderr, "\nProcess %ld terminate\n\n", (long)getpid());

	return 0;
}


