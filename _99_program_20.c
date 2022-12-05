//20.Program to find the largest of three numbers
#include <stdio.h>
 int main()
{
	float num1,num2,num3;
	printf("Enter the values:");
	scanf("%f %f %f",&num1,&num2,&num3);
	if(num1>num2 && num1>num3)
	{
		printf("num1 is greater");
	}
	else if(num2>num1 && num2>num3)
	{
		printf(" num2 is greater");
	}
	else
	{
		printf("num3 is greater");
	}
	return 0;
}
