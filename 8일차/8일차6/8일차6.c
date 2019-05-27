// 프로그램 목적:
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int i = 0, j = 0; // 제어변수: for문 제어
	int input = 0; // 입력변수: 해당 정수보다 작은 소수를 구함
	int count = 0; // 출력변수: 소수의 개수를 파악

	// 자료입력
	printf("임의의 정수를 입력해주십시오: ");
	scanf_s("%d", &input);

	// 자료처리 및 출력
	printf("다음은 %d이하의 소수입니다: ", input);
	for (i = 1; i <= input; i++) // 외부 for문: 피제수 제어
	{
		for (j = 2; j <= i; j++) // 내부 for문: 제수 제어
		{
			if (i%j == 0) // 약수가 1개라도 있으면 반복문 탈출
				break;
		}
		if (i == j) // 제수와 피제수가 같으면, 즉, 소수이면 출력
			printf("%d ", i);
	}
	printf("\n");

	return 0; // 실행종료
} // main함수 종료