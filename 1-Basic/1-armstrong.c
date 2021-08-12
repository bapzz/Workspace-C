/*
 * =====================================================================================
 *
 *       Filename:  1.armstrong.c
 *
 *    Description:  The sum of its own digits each raised to the power of the number of 
 * 					digits is equal to the number.  
 * 					Ex : 153 = 1^3 + 5^3 + 3^3 = 153
 * 						 1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1634
 *
 *         Author:  Biswajeet Sahoo <biswajeet21sahoo@gmail.com>
 *
 * =====================================================================================
 */
 
#include "stdio.h"


static int total_length (int number);
static int calculate_power (int num, int total_len);

static int total_length (int number) {
	int total_nums;
	/* Determine length of the number */
	total_nums = snprintf(0,0, "%d", number);

	return total_nums;
}

static int calculate_power (int num, int total_len) {
	int power_sum = 1;
	/* Is this the best way to do it ?? 
	 * If We dont take the condition, the there is no power calculation till 9
	 * */
	if (num <= 9 && total_len == 1)
		power_sum = num;	

	while(total_len != 0)
	{
		power_sum = power_sum * num;	/* Take the power one at a time */
		total_len--;
	}
	return power_sum;
}

int main(void)
{
	int sum = 0, number, num;
	int power;

	printf("Enter the number :");
	scanf("%d", &number);
	num = number;
	power = total_length(number);

	while (number != 0){
		int temp = number % 10;		// Extract the last number
		sum = sum + calculate_power(temp, power);	// Take the sum
		number = number / 10;		// Remove the last number
	}

	if (num == sum){
		printf("%d is a armstrong number.\n", sum);
	}
	else {
		printf("Not a armstrong number:- %d\n", num);
	}

	return 0;
}

