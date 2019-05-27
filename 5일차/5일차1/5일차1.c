// 프로그램 목적: 두 수를 입력받고 최솟값과 최댓값을 출력
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int num1, num2; // 입력변수: 크기를 비교할 수를 입력
	int max = 0; // 출력변수1: 두 수 중 큰 값을 출력
	int min = 0; // 출력변수2: 두 수 중 작은 값을 출력

	// 자료입력
	printf("크기를 비교할 정수 2개를 입력해주십시오: ");
	scanf_s("%d %d", &num1, &num2);

	// 자료처리 및 결과출력 1: 조건삼항연산자를 이용하여 최댓값을 구하고 출력
	max = (num1 > num2) ? num1 : num2;
	printf("\n입력하신 정수 중 더 큰 값은 \"%d\"입니다.\n", max);

	// 자료처리 및 결과출력 2: if문을 이용하여 최솟값을 구하고 출력
	if (num1 > num2)
		min = num2;
	else
		min = num1;
	printf("입력하신 정수 중 더 작은 값은 \"%d\"입니다.\n\n", min);

	return 0; // 실행종료
} // main함수 종료