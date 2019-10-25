#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	int a1 ;
	float sum = 0, b1 , b2, b3, b4, b5;
	printf("investment of $");
	scanf_s("%d", &a1);
	printf("interest rates (%) :");
	scanf_s("%f", &b1);
	for (int i =1;i<=15;i++)
	{
		a1 = a1 + (a1 * (b1 / 100));
	}
	printf("15years total interest rate amount:%d\n",a1);
	printf("pause");
	return 0;
}