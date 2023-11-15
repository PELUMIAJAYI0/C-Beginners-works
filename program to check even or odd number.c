//program to check even or add number

#include<stdio.h>

int main()
{
	int value;
	
	printf("enter the value to check--->");
	scanf("%d", &value);
	
	if(value%2==0)
	{
		printf("%d is an even number", value);
	}
	else
	{
		printf("%d is an odd number", value);
	}
	
	return 0;
}
