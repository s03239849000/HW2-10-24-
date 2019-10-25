#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	int a1 = 0;
	float sum = 0, b1=0, b2, b3, b4, b5;
	while (b1 != -1)
	{
		printf("\nEnter loan principal (-1 to end) : ");
		scanf_s("%f", &b1);
		if ((b1 != -1))
		{
			printf("Enter interest rate :");
			scanf_s("%f", &b2);
			printf("Enter term of the loan in days :");
			scanf_s("%f", &b3);
			printf("The interest charge is $%f",((b1*b2*b3)/365));
		}
	}
	printf("pause");
	return 0;
}