// 프로그램 목적: 문자열의 길이를 구하는 프로그램
#include <stdio.h>
#include <string.h> // 라이브러리 함수 strlen()을 이용하기 위한 전처리기

int string_length(char *ch); // 함수선언

int main(void) // main함수 시작
{
	// 변수선언
	char* string = "C language and data structure"; // 포인터선언: 길이를 구할 문자열 저장

	// 자료처리 및 출력
	printf("1) 사용자 정의 함수를 이용해서 구한 문자열의 원소개수는 \"%d개\"입니다.\n\n", string_length(string)); // 사용자정의 함수 호출
	printf("2) 라이브러리 함수 strlen()를 이용해서 구한 문자열의 원소개수는 \"%d개\"입니다.\n\n", strlen(string)); // 라이브러리 함수 호출 (2번 참고)
	printf("3) 라이브러리 함수 strlen()를 이용해서 구한 문자열의 원소개수는 \"%d개\"입니다.\n\n", strlen("C language and data structure")); // 라이브러리 함수 호출

	return 0; // 실행종료
} // main함수 종료

int string_length(char* ch) // 함수정의 => 문자열의 시작주소인 "string"의 주소가 포인터변수 ch에 전달 (call by reference)
{
	int count = 0; // 출력변수: 문자열의 길이를 출력
	while (*(ch++)) // ch에 저장된 값이 null문자가 아닐 때까지 반복 (1번 참고)
		count++; 
	return count; // count의 값을 반환
}

// 1) string_length()함수의 로직
// 전제: count는 "문자열의 길이를 저장하는 변수"이고 ch는 main함수로부터 문자열의 시작주소인 "string"을 넘겨받음
// while문의 구조 분석 => 1번) 초기화: ch의 값은 문자열의 시작주소
//                       2번) 조건문: *(ch++); <=> ch = ch; -> *(ch) == '\0';(1: 종료, 0: 계속) -> ch = ch + 1; // 이것이 한 루프
//                       3번) 실행문이자 증감식: count++; <=> count = count + 1; (0 -> 1 -> 2 -> ... -> null문자 만날 때까지 증가)
// 반환: while문의 마지막 루프를 돌면서 마지막으로 count의 값이 1 증가하게되고 이로 인해 반환값은 문자열의 개수와 일치하게되어 "count-1"이 아닌 "count"의 값 반환
//
// 2) 라이브러리 함수 strlen(string length)의 문법
// strlen(변수명) 또는 strlen("문자열")
// strlen() <=> sizeof(변수명)/sizeof(자료형)