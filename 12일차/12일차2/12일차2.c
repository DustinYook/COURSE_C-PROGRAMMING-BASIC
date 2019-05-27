// 프로그램 목적: 저장된 문자열을 거꾸로 출력
#include <stdio.h>

void Reverse(char string[], int num); // 함수선언

int main(void) // main함수의 시작
{
	// 변수선언
	char string[] = "tomato"; // 입력변수: 거꾸로 출력할 대상 문자열
	int num = 0; // 문자열을 구성하고 있는 원소의 개수

	// 결과출력
	num = sizeof(string)/sizeof(char); // 문자열을 구성하고 있는 원소의 개수를 저장 
	printf("해당 문자열은 \"%d개\"의 문자상수로 구성되어있습니다.\n", num); // 문자열은 NULL문자의 개수를 포함
	Reverse(string, num); // 함수호출

	return 0; // 실행종료
} // main함수의 종료

void Reverse(char string[], int num) // 함수정의: 자료처리 => main함수의 string, num의 값을 전달받아 처리 후 결과값을 반환
{
	int i = 0; // 제어변수: for문 제어
	for (i=num-2; i>=0; i--) 
		putchar(string[i]);
} 
// 1) 초기화가 "i=num-2"인 이유: string[0]='t', string[1]='o', string[2]='m', string[3]='a', string[4]='t', string[5]='o', string[6]='\0'    
// 여기서 i가 문자열의 개수를 의미하므로 i는 7임 (NULL문자 포함하기 때문) => 따라서 "i-2"는 '5'이고 이는 실제적으로 문자열의 마지막 글자인 'o'를 의미함
