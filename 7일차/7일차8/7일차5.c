// 프로그램 목적: 출력할 단을 입력받고 해당 단의 구구단을 출력
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int input = 0; // 입력변수:
	int i = 0; // for문의 개수에 따라 i, j, k

	// 자료입력
	printf("출력할 단을 입력해주십시오: ");
	scanf_s("%d", &input);
	
	// 자료처리 및 출력
	for (i = 1; i <= 9; i++) // 구구단은 1부터 9까지의 곱으로 이루어져 있음
		printf("%2d * %d = %2d\n", input, i, i*input);

	return 0; // 실행종료
} // main함수 종료 