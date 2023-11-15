//program to check if a number is 10, 50, 100 using switch case
#include<stdio.h>

int main()
{
	int GST211, MTH211, CMP211;
	int total;
	int average;
	
	printf("enter the GST211 score-->");
	scanf("%d", &GST211);
	
	printf("enter the MTH211 score-->");
	scanf("%d", &MTH211);
	
	printf("enter the CMP211 score-->");
	scanf("%d", &CMP211);
	
	total = GST211 + MTH211 + CMP211;
	
	average = total/3;
	
	printf("total score is %d \n", total);
	printf("average score is %d \n", average);
	
	
	switch(average)
	{
		case 70 ... 100:
		    printf("your grade is A");
		break;
		
	    case 60 ... 69:
            printf("your grade is B");
		break;
		
	    case 50 ... 59:
		    printf("your grade is C");
		break;
		
		case 45 ... 49:
		    printf("your grade is D");
		break;
		
	    default:
		printf("your grade is F");
	}
	
	return 0;
}
