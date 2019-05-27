// 프로그램 목적: 2개의 정수를 입력받아 최댓값과 최솟값 출력
#include <stdio.h>

int main(void)
{
	// 변수선언
	int x = 0, y = 0; // 입력변수: 입력값
	int min = 0, max = 0; // 출력변수: 최댓값 또는 최솟값 
	int result = 0;

	// 자료입력
	printf("임의의 두 정수를 입력해주십시오: ");
	scanf_s("%d %d", &x, &y);

	// 자료처리
	if (x > y)
	{
		max = x; // <=> max = (x > y) ? x : y 
		min = y;
	}
	else
	{
		max = y; // <=> min = (x < y) ? y : x
		min = x;
	}

	// 결과출력
	printf("두 수 %d와 %d 중에 큰 수는 %d이다.\n", x, y, max);
	printf("두 수 %d와 %d 중에 작은 수는 %d이다.\n", x, y, min);

	return 0;
}

// 문법적인 것과 알고리즘은 반드시 잘 배워가도록 할 것
// (조건) ? 참 : 거짓;