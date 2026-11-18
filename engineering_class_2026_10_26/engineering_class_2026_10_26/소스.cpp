// 먼저 각각의 값을 입력한다 voltage, current, resistance, exit
//함수를 3개 판다 (v의 함수, r의 함수, i의 함수)

#include <stdio.h>

int get_Voltage()
{
	int Current;
	int Resistance;
	int value_1;

	printf("Enter Current(A):");
	scanf_s("%d", &Current);
	if (Current <= 0)
	{
		printf("retry enter Current(A):");
		scanf_s("%d", &Current);
	}

	printf("Enter Resistance(ohm):");
	scanf_s("%d", &Resistance);
	if (Resistance <= 0)
	{
		printf("retry enter Resistance(ohm):");
		scanf_s("%d", &Resistance);
	}
	value_1 = Current * Resistance;
	return value_1;

}

int get_Resistance()
{
	int voltage;
	int Current;
	int value_2;

	printf("Enter voltage(V): ");
	scanf_s("%d", &voltage);
	if (voltage <= 0)
	{
		printf("retry enter voltage(V): ");
		scanf_s("%d", &voltage);
	}

	printf("Enter Current(A): ");
	scanf_s("%d", &Current);
	if (Current <= 0)
	{
		printf("retry enter Current(A): ");
		scanf_s("%d", &Current);
	}
	value_2 = voltage / Current;
	return 0;
}

int get_Current()
{
	int voltage;
	int Resistance;
	int value_3;

	printf("Enter voltage(V): ");
	scanf_s("%d", &voltage);
	if (voltage <= 0)
	{
		printf("retry enter voltage(V): ");
		scanf_s("%d", &voltage);
	}
	printf("Enter Resistance(ohm): ");
	scanf_s("d", &Resistance);
	if (Resistance <= 0)
	{
		printf("retry enter Resistance(ohm): ");
		scanf_s("%d", &Resistance);
	}
	 value_3 = voltage / Resistance;
	return value_3;
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
		printf("Voltage(V): %d", value_1);
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