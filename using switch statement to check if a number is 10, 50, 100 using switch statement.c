//program to check if a number is 10, 50, 100 using switch case
#include<stdio.h>

int main()
{
	int number;
	
	printf("enter the number to check");
	scanf("%d", &number);
	
	switch(number)
	{
		case 10:
		//if number==10
		    printf("number entered is 10");
		break;
		
	    case 50:
		//if number==50
	 	    printf("number entered is 50");
		break;
		
	    case 100:
		//if number==100
		    printf("number entered is 100");
		break;
		
	    default:
		//else
		printf("number entered is neither 10, 50 or 100");
	}
	
	return 0;
}
