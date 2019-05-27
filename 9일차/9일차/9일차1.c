// 프로그램 목적: 줄 수에 따라 직각삼각형 모양으로 '*'문자 출력
#include <stdio.h>

int main(void)
{
	// 변수선언
	int row = 0; // 제어변수1
	int print = 0; // 제어변수2 

	// 자료처리 및 출력
	for (row = 1; row <= 5; row++) // 외부 for문: 출력 줄 수 제어
	{
		for (print = 1; print <= row; print++) // 내부 for문: 출력 문자 수 제어
			printf("* ");
		printf("\n"); // 이 부분을 반드시 포함해야 한 줄에 모두 찍는 논리적 오류를 방지 가능
	}

	return 0; // 실행종료
}