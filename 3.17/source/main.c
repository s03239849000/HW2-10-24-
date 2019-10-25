#include <stdio.h>;
#include <stdlib.h>;

int main(void)
{
	int a1=0;
	float sum=0,b1,b2,b3,b4,b5;
	while(a1!=-1)
	{
		printf("\nEnter account number (-1 to end) : ");
		scanf_s("%d", &a1);
		if((a1!=-1))
		{
			printf("Enter beginning balance :");
			scanf_s("%f", &b1);
			sum = sum + b1;
			printf("Enter total charges : ");
			scanf_s("%f", &b2);
			sum = sum + b2;
			printf("Enter total credits : ");
			scanf_s("%f", &b3);
			sum = sum - b3;
			printf("Enter credit limit : ");
			scanf_s("%f", &b4);
			if ((b1 + b2 - b3) > b4) 
			{
				printf("\nAccount :%d", a1);
				printf("\nCredit limit :%f",b4);
				printf("\nBalance :%f", sum);
				printf("\nCredit Limit Exceeded.");
			}
		}
	}
	printf("pause");
	return 0;
}