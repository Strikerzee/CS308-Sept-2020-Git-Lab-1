/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

// This is the main function
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	int i = 0, flag = 1;
	while(argv[1][i++] != '\0')
	{
		if(!isdigit(argv[1][i - 1]))
			flag = 0;
		if(i == 1 && argv[1][0] == '-')
			flag = 1;
	}

	int input = atoi(argv[1]);
	if(flag)
	{
		if(input > 0)
		{
			printf("Sqrt of %d is %f\n",input,sqrt(input));
		}
		else
		{
			input *= -1;
			printf("Sqrt of %d is %fi\n",input*-1,sqrt(input));
		}
	}
	else
	{
		printf("Given input is not a number.\n");
	}
	printf("End of program. Exiting.\n");
	return(0);

} // end main
