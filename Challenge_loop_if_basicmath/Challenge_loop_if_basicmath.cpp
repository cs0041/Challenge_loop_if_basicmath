#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float abss(float x)
{
	if (x < 0)
	{
		return x * -1;
	}
	else if (x >= 0)
	{
		return x;
	}
}
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	float many = abss(b - a) + 1;
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
	else if(a>b)
	{
		for (i = 0; i < many; i++)
		{
			x[i] = a--;
			printf("%d ", x[i]);
			
		}
	}
	if (a == b)
	{
		float average = a;
		float sd = 0;
		printf("%d\n", a);
		printf("Average = %.1f\n", average);
		printf("SD = %.2f\n", sd);
	}
	else
	{
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
	}
	return 0;
}