// 프로그램 목적: const를 이용한 변수의 상수전환과 cast연산자를 이용한 정수의 나눗셈 결과출력
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	const int num1 = +10, num2 = -3; // const: 변수를 상수로 전환 (저장값 변경 불가)
	// 주의) num1 = +9;은 문법적 에러 발생 => const로 인해 상수가 되었기 때문

	// 결과출력1: 양수에 생략된 '+'기호의 출력
	printf("num1의 값은 \"%+d\"이고 num2의 값은 \"%+d\"입니다.\n\n", num1, num2); // '+'는 양수에 생략된 '+'기호를 표시하도록 함

    // 결과출력2: cast연산자의 사용
	printf("num1에서 num2를 나눈 값은 \"%.2lf\"입니다.", (float)num1 / num2);

	return 0; // 실행종료 
}