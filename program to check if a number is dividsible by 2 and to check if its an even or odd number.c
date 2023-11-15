//C program to check if a number is divisible by 2
//if it is, check if it is an even or odd number

#include<stdio.h>

int main()
{
	int number;
	
	printf("Enter a number to check--->");
	scanf("%d",&number);
	
	if(number<=100)
	{
		printf("%d is less that 100 \n", number);
		
		if(number%2==0)
		{
			printf("%d is an even number ", number);
		}
		else 
		printf("%d is an odd number", number);
	}
	else
	printf("%d is greater than 100", number);
}


