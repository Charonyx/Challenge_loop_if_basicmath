#include<stdio.h>
#include<math.h>
int main() {
	int a, b, i, sum = 0, sumpow = 0, count = 0;
	scanf_s("%d %d", &a, &b);
	if (a <= b)
	{
		for (i = a; i <= b; i++)
		{
			printf_s("%d ", i);
			sum += i;
			sumpow += pow(i, 2);
			count++;
		}
	}
	else
	{
		for (i = a; i >= b; i--)
		{
			printf_s("%d ", i);
			sum += i;
			sumpow += pow(i, 2);
			count++;
		}
	}
	printf_s("\nAverage = %.1f", 1.0 * sum / count);
	printf_s("\nSD = %.2f", sqrt((count * sumpow - pow(sum, 2)) / (count - 1) / count));
}