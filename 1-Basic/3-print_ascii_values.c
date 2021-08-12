/*
 * =====================================================================================
 *
 *       Filename:  3-print_ascii_values.c
 *
 *    Description:  Prints all ascii values 
 *
 *         Author:  Biswajeet Sahoo <biswajeet21sahoo@gmail.com>
 *
 * =====================================================================================
 */
 
#include <stdio.h>

int main()
{
	printf("0-9:-");
	for(int i = 48; i <= 57; i++)
	{
		printf("%c ", i);
	}
	printf("\nA-Z:-");
	for(int i = 65; i <= 90; i++)
	{
		printf("%c ", i);
	}
	
	printf("\na-z:-");
	for(int i = 97; i <= 122; i++) 
	{
		printf("%c ", i);
	}
	printf("\n");

	return 0;
}


