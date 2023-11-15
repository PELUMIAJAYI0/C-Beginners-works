//PROGRAM TO GENETARE RECEIPT FOR ANCHOR SUPERMARKET

#include<stdio.h>
#include<stdlib.h>

int main(){
	
char name_of_customer[50];
char name_of_item[50];
char price_of_item[50];
char total_price[20];


    printf("Name_of_customer--->");
	//fgets(Name_of_customer, sizeof(Name_of_customer), stdin)
	fgets(name_of_customer, 50, stdin);
	
    printf("Name_of_item--->");
	//fgets(Name_of_item, sizeof(Name_of_item), stdin)
	fgets(name_of_item, 50, stdin);
	
	printf("Enter your price_of_item--->");
	//fgets(price_of_item, sizeof(price_of_item), stdin)
	fgets(price_of_item, 50, stdin);	
	
	printf("Enter your total_price--->");
	//fgets(total_price, sizeof(total_price), stdin)
	fgets(total_price, 20, stdin); 
	
	system("cls");
	//display
	printf(".....RECEIPT..... \n");
	printf("Name_of_customer---> ");
	puts(name_of_customer);
	printf("Name_of_item---> ");
	puts(name_of_item);
	printf("Enter your price_of_item---> ");
	puts(price_of_item); 
	printf("Enter your total_price---> ");
	puts(total_price); 
	
	return 0;	
}

