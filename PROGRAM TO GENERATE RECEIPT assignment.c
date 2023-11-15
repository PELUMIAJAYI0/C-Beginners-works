//PROGRAM TO GENETARE RECEIPT FOR ANCHOR SUPERMARKET

#include<stdio.h>
#include<stdlib.h>

int main(){
	
char name_of_customer[50];
char name_of_item_1[50];
char name_of_item_2[50];
char name_of_item_3[50];
float price_of_item_1;
float price_of_item_2;
float price_of_item_3;
float total_price;


    printf("Name_of_customer--->");
	fgets(name_of_customer, 50, stdin);
	
    printf("Name_of_item_1--->");
	fgets(name_of_item_1, 50, stdin);
	
	printf("Enter your price_of_item_1--->");
	scanf("%f", &price_of_item_1);
	
	printf("Name_of_item_2--->");
	fgets(name_of_item_2, 50, stdin);
	
	printf("Enter the price_of_item_2--->");
	scanf("%f", &price_of_item_2);
	
	printf("Name_of_item_3--->");
	fgets(name_of_item_3, 50, stdin);
	
	printf("Enter the price_of_item_3--->");
	scanf("%f", &price_of_item_3);
	
	total_price = price_of_item_1+price_of_item_2+price_of_item_3;
		
	
	printf("Enter total_price---> %f",total_price);
	
//	system("cls");
//	//display
//	printf(".....RECEIPT..... \n");
//	printf("Name_of_customer---> ");
//	puts(name_of_customer);
//	
//	printf("Name_of_item_1---> ");
//	puts(name_of_item_1);
//	printf("Enter the price_of_item_1---> ");
//    scanf("%f", &price_of_item_1);
//	
//	printf("Name_of_item_2---> ");
//	puts(name_of_item_2);
//	printf("Enter the price_of_item_2---> ");
//    scanf("%f", &price_of_item_2);
//	
//	printf("Name_of_item_3---> ");
//	puts(name_of_item_3);
//	printf("Enter the price_of_item_3---> ");
//    scanf("%f", &price_of_item_3); 
//	
//	printf("Enter the total_price--->",total_price);
//    scanf("%f", &total_price);
	
	return 0;	
}

