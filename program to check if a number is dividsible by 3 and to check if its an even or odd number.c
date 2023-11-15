//C program to check if a number is divisible by 3
//if it is, check if it is an even or odd number

#include<stdio.h>

int main()
{
	int number;
	
	printf("Enter a number to check--->");
	scanf("%d", &number);
	
	if(number<=300)
	{
		printf("%d is less than or equal to 300 \n", number);
		
		if(number%2==0)
		{
			printf("%d is divisible by 2 \n", number);
			
			if(number%3==0)
			{
				printf("%d is divisible by 3", number);
			}
			else
			printf("%d is not divisible by 3 \n", number);
			
		}
		else 
		printf("%d is an odd number", number);
		
	}
	else
	printf("%d is greater than 100", number);
	
}


