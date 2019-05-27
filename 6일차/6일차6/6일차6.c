// 프로그램 목적: 피연산자가 2개인 사칙연산 계산기
#include <stdio.h>

int main(void)
{
	// 변수선언
	int num1 = 0, num2 = 0; // 입력변수: 피연산자
	int result = 0; // 출력변수: 연산결과
	char operate = 'a'; // 입력변수: 연산자

						// 자료입력 및 처리
IN:
	printf("정수인 피연산자가 2개인 연산식을 작성해주세요: ");
	scanf_s("%d %c %d", &num1, &operate, sizeof(operate), &num2);

	switch (operate)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
	{
		printf("잘못 입력하셨습니다. 다시 한 번 입력해 주십시오.\n\n");
		printf("\a\a\a\a\a\a\a\a\a\a");
		goto IN;
	}
	}

	// 자료출력
	printf("%d %c %d = %d\n\n", num1, operate, num2, result);

	return 0; // 실행종료
}