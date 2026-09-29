#include<stdio.h>

int main()
{
	int a;
	int time;
	int min;
	int sec;

	printf("총 시간을 초 단위로 입력하세요:");
	scanf_s("%d",&a);

	time = a / 3600;
	min = (a / 60) % 60;
	sec = a % 60;
	printf("%d초는 %d시간 %d분 %d초 입니다.\n", a, time, min, sec);
	printf("디지털 표기:%02d:%02d:%02d\n", time, min, sec);
}