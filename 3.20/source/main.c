#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	int a1 = 0;
	float sum = 0, b1, b2, b3, b4, b5;
	while (a1 != -1)
	{
		printf("\nEnter # of hours worked (-1 to end) : ");
		scanf_s("%d", &a1);
		if ((a1 != -1))
		{
			printf("Enter hourly rate of the worker ($00.00) : ");
			scanf_s("%f", &b1);
			if (a1 <= 40)
			{
				printf("Salary is $%f\n", (a1*b1));
			}
			else if(a1>40)
			{
				sum = (a1 - 40)*5;
				printf("Salary is $%f\n", ((a1 * b1)+sum));
			}
		}
	}
	printf("pause");
	return 0;
}