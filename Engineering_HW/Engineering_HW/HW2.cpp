#include<stdio.h>

int main()
{
	int money;
	int cost;
	int quantity;

	printf("price per product:\n, product\n: ");
	scanf_s("%d %d\n", money, cost);

	cost = money * quantity;

	printf("total price: %d\n", cost);
	
	cost = cost * (10 / 100);

	printf("discount_price:\n", cost);

	

}