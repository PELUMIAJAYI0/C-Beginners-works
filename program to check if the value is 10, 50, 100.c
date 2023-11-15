//program to check if the value is 10, 50,100

#include<stdio.h>
int main()
{
	int value;
	printf("enter a value to check--->");
	scanf("%d", &value);
	
	if(value==10)
	{
		printf("value entered is 10");
	}
	else if(value==50)
	{
		printf("value entered is 50");
	}
	else if(value==100)
	{
		printf("value entered is 100");
	}
	else
	{
		printf("value entered is not 10, 50, 100");
	}
	
	return 0;
}
