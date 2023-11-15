
#include<stdio.h>

int main()
{
	int no_of_goods_in_store;
	int no_of_goods_ordered;
	int new_no_of_goods_in_store;
	
	printf("enter number of goods in store--->");
	scanf("%d", &no_of_goods_in_store);
	
	
	printf("enter number of goods ordered--->");
	scanf("%d", &no_of_goods_ordered);
	
	if(no_of_goods_ordered<no_of_goods_in_store)
	{
		printf("Goods avaliable for delivery \n");
		new_no_of_goods_in_store = no_of_goods_in_store - no_of_goods_ordered;
		printf("the new number of goods in store is %d", no_of_goods_in_store);
	}
	else
	{
		printf("out of stock!!! \n");
		printf("no of goods ordered is more that the quantity in stock!!!");
	}
	
	return 0;
	
	
}
