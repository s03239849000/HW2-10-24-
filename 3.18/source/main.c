#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	int a1 = 0;
	float sum = 0, b1=0, b2, b3, b4, b5;
	while (b1 != -1)
	{
		printf("\nEnter sales in dollars (-1 to end) : ");
		scanf_s("%f", &b1);
		if ((b1 != -1))
		{
			printf("Salary is: $%f\n",((b1*0.09)+200));
		}
	}
	printf("pause");
	return 0;
}