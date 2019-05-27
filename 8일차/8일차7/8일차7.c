// 프로그램 목적: 입력한 줄 수에 따라 홀수개의 별을 직각삼각형 모양으로 출력
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int input = 0; // 입력변수
	int i = 0, j = 0; // 제어변수

	// 자료입력
	printf("출력할 줄 수를 입력해주십시오: ");
	scanf_s("%d", &input);

	// 자료처리 및 출력
	for (i = 1; i <= input; i++) // 외부 for문: 출력 줄 수 제어
	{
		for (j = 1; j <= 2*i-1; j++) // 내부 for문: 출력 문자 수 제어
			printf("* ");
		printf("\n"); // 한 줄에 문자 찍는 것 방지
	}

	return 0; // 실행종료
} // main함수 종료