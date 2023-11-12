#include <stdio.h> 

int main (void)
{
	
	int d, 
		i1, i2, i3, i4, i5, 
		j1, j2, j3, j4, j5, 
		check_digit,first_sum, second_sum, total;

	printf("Enter the first 12 digits of a UPC including check digit:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
			&d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5,
			&check_digit);

	first_sum = d + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = 3 * first_sum + second_sum;

	if (check_digit == (9 - ((total - 1) % 10)))
	{
		printf("Check digit Valid\n");
	}
	else
	{
		printf("Check digit invalid\n");
	}

	return 0; 
}
