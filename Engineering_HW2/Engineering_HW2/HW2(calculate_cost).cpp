#include<stdio.h>

int main()
{
	int cost;
	int quantity;
	int money;
	int discount;
	printf("상품 단가(원):");
	scanf_s("%d", &cost);
	printf("수량(개):");
	scanf_s("%d", &quantity);

	money = (cost * quantity);
	discount = money * 0.1;
	printf("합계 금액: %d\n", money);
	printf("할인 (10%%): %d\n", -discount);
	printf("결제 금액: %d\n", money - discount);

	int given_money;
	int rest_money;
	printf("받은 금액(원): ");
	scanf_s("%d", &given_money);

	rest_money = given_money - (money - discount);
	printf("거스름돈: %d\n", rest_money);
	printf("1000원권: %d\n", rest_money / 1000 );
	printf("500원: %d\n", (rest_money % 1000) / 500);
	printf("100원: %d\n", ((rest_money % 1000) % 500) / 100);
	printf("50원: %d\n", (((rest_money % 1000) % 500) % 100) / 50);
	printf("나머지: %d\n", ((((rest_money % 1000) % 500) % 100) % 50) / 10);
}