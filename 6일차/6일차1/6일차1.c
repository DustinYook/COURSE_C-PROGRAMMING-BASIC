// 프로그램 목적: 세 정수 중 가장 큰 수 출력 (조건삼항연산자 응용)
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int num1 = 0, num2 = 0, num3 = 0; // 입력변수: 서로 다른 세 정수 입력
	int max = 0; // 출력변수: 최댓값 출력

	while (1)
	{
		// 자료입력
		printf("서로 다른 세 정수를 입력해주십시오: ");
		scanf_s("%d %d %d", &num1, &num2, &num3);

		// 입력규칙 준수여부 판단
		if (!(num1 == num2) && !(num1 == num3) && !(num2 == num3))
			break;
		printf("잘못입력하셨습니다. 다시 한 번 정확히 입력해주십시오.\n\n\a\a\a\a");
	}

	// 자료처리 및 출력
	max = (num1 > num2) ? num1 : num2; // 1단계: num1과 num2 비교 후 max에 더 큰 값 저장
	max = (max > num3) ? max : num3; // 2단계: 1단계에서 max에 저장된 값과 num3를 비교 후 max에 더 큰 값 저장
	printf("입력하신 세 정수 중 가장 큰 수는 \"%d\"입니다.\n\n", max);

	return 0; // 실행종료
} // main함수 종료