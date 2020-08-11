#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	float many = abs(b - a) + 1;
	int x[1000];
	int i;
	if (a < b)
	{
		for (i = 0; i < many; i++)
		{
			x[i] = a++;
			printf("%d ", x[i]);
		}
	}
	else
	{
		for (i = 0; i < many; i++)
		{
			x[i] = a--;
			printf("%d ", x[i]);
			
		}
	}
	printf("\n");
	float average = 0;
	for (i = 0; i < many; i++)
	{
		average += x[i];
	}
	average /= many;
	printf("Average = %.1f\n", average);
	float sd = 0;
	for (i = 0; i < many; i++)
	{
		sd += pow(x[i] - average, 2);
	}
	sd = sqrt(sd / (many - 1));
	printf("SD = %.2f\n", sd);
	return 0;
}