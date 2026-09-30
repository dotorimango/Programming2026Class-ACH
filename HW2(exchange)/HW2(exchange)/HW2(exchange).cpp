#include<stdio.h>

int main()
{
	int cost;
	int quantity;
	int money;
	int discount;
	printf("price:");
	scanf_s("%d", &cost);
	if (cost > 0){
	printf("qunatity:");
	}
	else if (cost < 0){
	return 0;
	}
	scanf_s("%d", &quantity);

	money = (cost * quantity);
	discount = money * 0.1;
	printf("toatl_sum: %d\n", money);
	printf("discount (10%%): %d\n", -discount);
	printf("total_price: %d\n", money - discount);

	int given_money;
	int rest_money;
	printf("given_money(won): ");
	scanf_s("%d", &given_money);

	rest_money = given_money - (money - discount);
	printf("exchange: %d\n", rest_money);
	printf("1000won: %d\n", rest_money / 1000);
	printf("500won: %d\n", (rest_money % 1000) / 500);
	printf("100won: %d\n", ((rest_money % 1000) % 500) / 100);
	printf("50won: %d\n", (((rest_money % 1000) % 500) % 100) / 50);
	printf("rest: %d\n", ((((rest_money % 1000) % 500) % 100) % 50) / 10);
}