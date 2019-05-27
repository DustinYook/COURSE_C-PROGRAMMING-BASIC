#include <stdio.h>

void StarPrint(int row);

int main(void)
{
	int row = 0; // 입력변수: 줄 수

	printf("출력을 원하는 줄 수를 정수형태로 입력해주십시오: ");
	scanf_s("%d", &row);

	return 0;
}

void StarPrint(int row)
{
	int i = 0; // 제어변수1: 출력할 줄 수 제어
	int j = 0; // 제어변수2: 출력할 문자수 제어
	int k = 0;

	// 상부 삼각형 출력
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= i-1; j++) // 공백제어
			printf(" ");
		for (k = 1; k <= (i*2)-1; k++)
			printf("*");
		printf("\n");
	}
	// 하부 삼각형 출력
	for (i = 1; i <= row; i++)
}

