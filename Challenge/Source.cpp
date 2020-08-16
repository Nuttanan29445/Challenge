#include <stdio.h>
#include <math.h>
int main()
{
	int num1, num2, n = 0;
	float sum = 0, Sd, a, b = 0, c, mean, s;
	printf("Input : ");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		for (int i = 0; i <= num1 - num2; i++) {
			printf("%d ", num1 - i);
			n++;
			sum += num2 + i;
		}
		printf("\nAverage = %.1f ", sum / n);
		mean = sum / n;
		for (int i = 0; i <= num1 - num2; i++) {
			a = (num2 + i) - mean;
			b += pow(a, 2);
		}
		c = b / (n - 1);
		Sd = sqrt(c);
		printf("\nSd = %.2f\n", Sd);
	}
	else
	{
		for (int i = 0; i <= num2 - num1; i++) {
			printf("%d ", num1 + i);
			n++;
			sum += num1 + i;
		}
		printf("\nAverage = %.1f ", sum / n);
		mean = sum / n;
		for (int i = 0; i <= num2 - num1; i++) {
			a = (num1 + i) - mean;
			b += pow(a, 2);
		}
		c = b / (n - 1);
		Sd = sqrt(c);
		printf("\nSd = %.2f\n", Sd);
	}
	return 0;


}