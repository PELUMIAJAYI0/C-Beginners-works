//program to check if the value is 0 and 20, 21 and 50, 51 and 80, 81 and 100

#include<stdio.h>
int main()
{
	int value;
	printf("enter a value to check--->");
	scanf("%d", &value);
	
	if(value>=0 && value<=20)
	{
		printf("value entered is between 0 and 20");
	}
	else if(value>=21 && value<=50)
	{
		printf("value entered is between 21 and 50");
	}
	else if(value>=51 && value<=80)
	{
		printf("value entered is between 51 and 80");
	}
	else if(value>=81 && value<=100)
	{
		printf("value entered is between 81 and 100");
	}
	else if(value>100)
	{
		printf("value entered is out of range");
	}
	
	return 0;
}
