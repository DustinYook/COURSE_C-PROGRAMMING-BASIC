// 프로그램 목적: 자료입력받아 알파벳이면 대소전환, 그 외 문자를 입력받으면 공백문자 출력
#include <stdio.h>

void Change_Case(char ch); // 함수선언: 사용자 정의 함수

int main(void) // main함수 시작
{
	// 변수선언
	char ch; // 입력변수: 변환하여 출력할 알파벳 입력

	while ((ch = getchar()) != EOF) // EOF 전까지 입력받음
		Change_Case(ch); // 함수호출

	return 0; // 실행종료
} // main함수 종료

void Change_Case(char ch) // 함수정의
{
	if (ch >= 'a' && ch <= 'z')
		putchar(ch - 32); // 소문자를 입력받은 경우 '32'를 빼주어 대문자로 전환
	else if (ch >= 'A' && ch <= 'Z')
		putchar(ch + 32); // 대문자를 입력받은 경우 '32'를 더해주어 소문자로 전환
	else
		putchar(' '); // 숫자, 특수문자 입력시 공백처리
}
// 참고) 콘솔에서 EOF(End of File)는 <ctrl>+'z'를 의미
// 한 문자 입력 시 마다 한 문자씩 처리해서 출력 => ios stream