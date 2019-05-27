// 프로그램 목적: 숫자를 삼각형 형태로 출력
#include <stdio.h>

int main(void)
{
	// 변수선언
	int row = 0;
	int print = 0;

	// 자료처리 및 출력
	for (row = 1; row <= 10; row++) // 외부 for문: 출력 줄 수 제어
	{
		for (print = 1; print <= (2 * row - 1); print += 2) // 내부 for문: 출력 문자 수 제어 (조건식을 출력 줄 수에 대한 식으로 나타내는 것이 핵심)
			printf("%2d ", print);
		printf("\n");
	}

	return 0; // 실행종료
}
// 다른방법: for(i=1; i<=20; i+=2) -> for(j=1; j<=i; j+=2)