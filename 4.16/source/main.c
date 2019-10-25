#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	int a1 = 0,gg;
	float sum = 0, b1 = 0, b2, b3, b4, b5;
	printf("(A)               (B)               (C)               (D)\n");
	for (int i= 1; i < 11; i ++)
	{
		for (int k = 0; k < i; k++)
		{
			printf("%s", "*");
		}
		for (int q = 18; q > i; q--)
		{
			printf(" ");
		}
		for (int j = 11; j >i; j--)
		{
			printf("%s", "*");
		}
		for (int w = 0; w <(i+3); w++)
		{
			for (int y = 0; y < 2; y++)
			{
				printf(" ");
			}
		}
		for (int j = 11; j > i; j--)
		{
			printf("%s", "*");
		}
		for (int q = 18; q > i; q--)
		{
			printf(" ");
		}
		for (int e = 0; e < i; e++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("pause");
	return 0;
}