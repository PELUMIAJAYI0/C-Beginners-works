//Program to input and display your name, nationality and date of birth

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char fullname[50];
	char nationality[30];
	char Date_Of_Birth[30];
	
	printf("Enter your full name--->");
	//fgets(fullname, sizeof(fullname), stdin)
	fgets(fullname, 50, stdin);
	
	printf("Enter your nationality--->");
	//fgets(nationality, sizeof(nationality), stdin)
	fgets(nationality, 30, stdin);	
	
	printf("Enter your Date_Of_Birth--->");
	//fgets(Date_Of_Birth, sizeof(Date_Of_Birth), stdin)
	fgets(Date_Of_Birth, 30, stdin);
	

	system("cls");
	//display
	printf(".....STUDENT INFORMATION..... \n");
	printf("Fullname---> ");
	puts(fullname);
	printf("Nationality---> ");
	puts(nationality);
	printf("Date_Of_Birth---> ");
	puts(Date_Of_Birth);
	
	//printf("Fullname---> %s \n", fullname);
	//printf("Nationality---> %s \n", nationality);
	//printf("Date_of_Birth---> %s \n", Date_Of_Birth);
	
	
	return 0;
	
	
	
}

