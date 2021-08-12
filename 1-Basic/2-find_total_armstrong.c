/*
 * =====================================================================================
 *
 *       Filename:  2-find_total_armstrong.c
 *
 *    Description:  Find all the available armstrong numbers given in the limit.
 *
 *        Created:  Wednesday 20 September 2017 05:32:05  IST
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
	int sum = 0, num = 1, limit;
	printf("Enter The Limit :");
	scanf("%d", &limit);
	while (num <= limit){
		int power = 0;
		int number = num;

		power = total_length(number);
		while (number != 0){
			int temp = number % 10;		// Extract the last number
			sum = sum + calculate_power(temp, power);	// Take the sum
			number = number / 10;		// Remove the last number
		}
		if (sum == num)
			printf("Armstrong number is :- %d\n", sum);
		
		sum = 0;
		num++;	
	}

	return 0;
}

