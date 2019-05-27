// 프로그램 목적: 덧셈을 반복해서 수행하고 그 결과를 출력
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int i = 0, j = 0; // 제어변수
   
	for (i = 1; i <= 5; i++) // 외부 for문
	{
		for (j = 1; j <= 3; j++) // 내부 for문 
			printf("%2d + %2d = %2d |", j, i, i+j);
		printf("\n");
	}

	return 0; // 실행종료
} // main함수 종료