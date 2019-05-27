// 프로그램 목적: 문자열의 포인터변수, 배열을 이용한 출력
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	char* string1 = "C Language"; // 포인터변수(string1)에 문자열 시작주소 저장 
	char string2[] = "C Language"; // 배열명(string2)에 문자열 시작주소 저장
	char string3[] = { 'J','A','V','A', '\0', 'S', '\0' }; // %s가 어디까지 출력하는지 관찰
	int i = 0; // 제어변수: for문 제어변수
	 
	// 자료출력 1: 문자열 단위로 출력
	printf("1) 포인터변수를 이용한 문자열 출력: %s\n", string1);
	printf("2) 배열을 이용한 문자열 출력: %s\n", string2); 
	printf("참고) 문자열 출력 관찰: %s\n", string3); // 'g'뒤에 null문자 만나면 문자열 끝으로 인식 (1번 참고)

	// 자료출력 2: 문자상수 단위로 출력
	printf("4) 반복문을 이용하여 문자열 출력: ");
	for (i = 0; *(string1+i); i++) // *(string + i)의 의미 *(string + i)에 저장된 값이 null이 아닐 때까지 반복
		printf("%c", *(string1+i));  
	printf("\n\n");

	return 0; // 실행종료
} // main함수 종료

// 1) 형식지정자 "%s"의 특징
// 형식지정자 "%s"는 배열시작주소를 전달받아 null문자 만나기 전까지 출력 수행 
// 주의) 주소(Reference)가 아닌 값(value)을 전달할 경우 문법적 오류 발생
// 따라서 주소를 전달할 수 있는 배열명이나 포인터변수명, &변수명을 적어주어야 함
//
// 2) *(string1+i)와 *(string++)의 차이점 
// 주의) string++는 string이 배열명이면 사용 불가능, 오직 포인터변수만 사용가능 => 상수와 변수차이
// 전자는 값을 갱신하지 않고, 후자는 값을 갱신한다는 특징이 있음