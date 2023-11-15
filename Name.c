#include<stdio.h>

int main(){
	//fullname[]="Ajayi Adebola";
	char fullname[50];
	printf("Enter your name:");
	//scanf("%[^\n]s ", fullname);
	//gets(fullname);
	//fgets(fullname, sizeof(fullname), stdin);
	fgets(fullname, 20, stdin);
	
	printf("My name is %s", fullname);
	
	return 0;
}
