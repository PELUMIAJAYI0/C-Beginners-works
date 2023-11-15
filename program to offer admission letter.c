//program to offer admission to student whose age is above 16
#include<stdio.h>

int main()
{
	int age; 
	
	printf("enter applicant's age--->");
	scanf("%d",&age);
	
	if(age>=16)
	{
		printf("offer applicant admission letter!!!");
	}
	else{
		printf("dont offer admission letter, go and find another school");
	}
}
