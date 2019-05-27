// 프로그램 목적: 대문자를 입력받아 소문자로 변환
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	char input;

	// 자료입력1
	puts("대문자를 입력해주십시오.");
	input = getchar(); // 대문자를 입력받아 input이라는 변수공간에 저장

	// 자료처리 및 출력1
	puts("입력해주신 대문자를 소문자로 변환하면 아래와 같습니다.");
	putchar(input + 32);
	printf("\n\n"); // puts()에는 탈출문자(escape sequence)를 사용하지 못해 printf()를 사용해야 함

	// 자료입력2
	printf("대문자를 입력해주십시오: ");
	scanf_s("%c", &input, sizeof(input));

	// 자료처리 및 출력2
	printf("해당 문자를 소문자로 변환한 것은 \"%c\"입니다.\n\n", input + 32);

	return 0; // 실행종료: 운영체제에 정상적 종료되었다는 결과값을 반환
} // main함수 종료