// 프로그램 목적: 두 개의 피연산자를 산술연산하는 계산기 
#include <stdio.h>

int main(void)
{
	// 변수선언
	int num1 = 0, num2 = 0; // 입력변수: 피연산자
	char operate = 'a'; // 입력변수: 연산자
	int result = 0; // 출력변수: 연산결과

					// 자료입력
IN:
	printf("정수인 피연산자가 2개인 연산식을 작성해주세요: ");
	scanf_s("%d %c %d", &num1, &operate, sizeof(operate), &num2);

	// 자료처리
	if (operate == '+')
		result = num1 + num2;
	else if (operate == '-')
		result = num1 - num2;
	else if (operate == '*')
		result = num1 * num2;
	else if (operate == '/')
		result = num1 / num2;
	else
	{
		printf("잘못입력하셨습니다. 다시 한 번 입력해주세요.\n\n");
		goto IN;
	}

	// 결과출력
	printf("%d %c %d = %d\n\n", num1, operate, num2, result);

	return 0; // 실행종료
}