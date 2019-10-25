#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	
	int x, y, z, i, j, k, sum;
	printf("x\ty\tz\t\n");
	printf("\n");
	printf("hypotenuse lengh :");
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= 500; j++)
		{
			sum = (i * i) + (j * j);
			
			for (k = 1; k <= 500; k++)
			{
				if (sum == (k * k))
				{
					printf("%d\t", i);
					printf("%d\t", j);
					printf("%d\t\n", k);
				}
			}
		}
	}
	//printf("hypotenuse lengh :");
	printf("\npause");
	return 0;
}