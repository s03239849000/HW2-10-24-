#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	int a1=0;
	float sum=0,sum2=0,sum3=0, b2, b3, b4, b5,b6;
	while (a1 != -1)
	{
		printf("\nPay code (1 to 4)(-1 to end) : ");
		scanf_s("%d", &a1);
		if ((a1 != -1))
		{
			if(a1==1)
			{
				printf("managers\n");
				printf("receive a fixed weekly salary :$5000" );
				//scanf_s("%f", &b2);
			}
			else if (a1 == 2)
			{
				sum = 0;
				printf("hourly workers\n");
				printf("receive a fixed hourly wage for up to the first 40 hours : 2000\n");
				printf("total time:");
				scanf_s("%f", &b2);
				if (b2 > 40) {
					sum = ((b2-40)*50*1.5)+2000;
			    }
				if (b2 == 40) {
					sum = 2000;
				}
				printf("weekly salary :$%f", sum);
			}
			else if (a1 == 3)
			{
				printf("commission workers\n");
				printf("gross weekly sales :");
				scanf_s("%f", &b3);
				sum2 = 250 + (b3 * 0.0579);
				printf("weekly salary :$%f",sum2);
			}
			else if (a1 == 4)
			{
				printf("Pieceworkers\n");
				printf(" Product a($2):");
				scanf_s("%f", &b4);
				printf(" Product b($5):");
				scanf_s("%f", &b5);
				printf(" Product c($7):");
				scanf_s("%f", &b6);
				sum3 = (b4*2) + (b5*5) + (b6*7);
				printf("weekly salary :$%f", sum3);
			}
			else
			{
				printf("Please enter the correct Pay code");
				return 0;
			}
		}
	}
	printf("pause");
	return 0;
}