#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/*
 *	Lab program that takes two different programs
 *	First one:
 *
 */

int outputSize = 4;
int arraySize = 3;

int toArgv(char* source, char* dest[], int size)
{
	int destinationSize = 1;	
	char *delimit;
	delimit = strtok(source," ");
	dest[0] = delimit;
	while(destinationSize != size)
	{
		delimit = strtok(NULL," ");
		dest[destinationSize] = delimit;
		destinationSize++;
	}
	return destinationSize;
}


int main(int argc, char *argv[]) {
	char string[] = "sample string also this";
	char* output[sizeof(char) * outputSize];
	int counter = toArgv(string,output,5);
	for(int i =0 ; i != counter; ++i)
	{
		printf("%d|-->'%s'\n", i, output[i]);
	}
	//Print output 
}
