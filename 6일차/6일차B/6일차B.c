// 프로그램 목적: 입력받은 2개의 피연산자를 사칙연산하는 계산기
#include <stdio.h>

int main(void)
{
	// 변수선언
	double operand1 = 0.0, operand2 = 0.0; // 입력변수: 피연산자
	double result = 0.0; // 출력변수: 연산결과
	char operate = 'a'; // 입력변수: 제 1 연산자 (산술연산자로 한정)
	char equal = 'a'; // 입력변수: 제 2 연산자 ('='로 지정)

					  // 자료입력 및 입력규칙 준수여부 판별
	while (1) // 조건식이 '1(참)'이므로 무한루프
	{
		// 자료입력문
		printf("계산결과를 알고싶은 이항 사칙연산식을 입력해주십시오.\n");
		printf("입력 예시: 1 + 2 = \n");
		scanf_s("%lf %c %lf %c", &operand1, &operate, sizeof(operate), &operand2, &equal, sizeof(equal));

		// 입력규칙 준수시
		if (((operate == '+') || (operate == '-') || (operate == '*') || (operate == '/')) && (equal == '='))
			break;
		// 입력규칙 미준수시
		printf("잘못입력하셨습니다. 다시 한 번 입력해주십시오.\n\n");
		printf("\a\a\a\a\a\a\a\a\a\a\a");
	}

	// 자료처리
	switch (operate) // 문자상수도 정수의 일종이므로 switch문에 사용가능
	{
	case '+': // 덧셈 입력시
		result = operand1 + operand2; // 덧셈연산 수행
		break; // 그리고 switch문 탈출
	case '-': // 뺄셈 입력시
		result = operand1 - operand2; // 뺄셈연산 수행
		break; // 그리고 switch문 탈출
	case '*': // 곱셈 입력시
		result = operand1 * operand2; // 곱셈연산 수행
		break; // 그리고 switch문 탈출
	case '/': // 나눗셈 입력시
		result = operand1 / operand2; // 나눗셈연산 수행
		break; // 그리고 switch문 탈출
	}

	// 자료출력
	printf("%.2lf %c %.2lf %c %.2lf\n\n", operand1, operate, operand2, equal, result);

	return 0; // 실행종료
}