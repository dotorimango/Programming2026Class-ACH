// 먼저 각각의 값을 입력한다 voltage, current, resistance, exit
//함수를 3개 판다 (v의 함수, r의 함수, i의 함수)

#include <stdio.h>

int get_Voltage()
{
	int Current;
	int Resistance;

	printf("Enter Current(A):\n");
	scanf_s("%d", &Current);
	printf("Enter Resistance(ohm):\n");
	scanf_s("%d", &Resistance);
	return 0;

}

int get_Resistance()
{
	int voltage;
	int Current;

	printf("Enter voltage(V): \n");
	scanf_s("%d", &voltage);
	printf("Enter Current(A): \n");
	scanf_s("%d", &Current);
	return 0;
}

int get_Current()
{
	int voltage;
	int Resistance;


	printf("Enter voltage(V): \n");
	scanf_s("%d", &voltage);
	if (voltage <= 0)
	{
		printf("retry enter voltage(V): \n");
		scanf_s("%d", &voltage);
	}
	printf("Enter Resistance(ohm): \n");
	scanf_s("d", &Resistance);
	if ("Resistance <= 0")
	{
		printf("retry enter Resistance(ohm): \n");
		scanf_s("%d", &Resistance);
	}
	return 0;
}


int main()
{
	int a;

	printf("case 1 : Voltage, case 2: Current, case 3: Resistance, case 4: Exit \n choose your function:");
	scanf_s("%d", &a);

	switch (a)
	{
	case 1:
		get_Voltage();
		printf("Voltage(V): %d", get_Voltage());
		break;

	case 2:
		get_Current();
		printf("Current(A): %d", get_Current());
		break;

	case 3:
		get_Resistance();
		printf("Resistance(ohm): %d", get_Resistance());
		break;

	case 4:
		printf("Exit");
		break;
	}
	return 0;
}