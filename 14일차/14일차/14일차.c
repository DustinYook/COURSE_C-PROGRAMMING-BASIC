// 프로그램 목적: 소문자 문자열을 대문자 문자열로 전환
#include <stdio.h>
#include <ctype.h> // toupper()함수를 사용하기 위한 전처리기

int main(void) // main함수 시작
{
	// 변수선언: 소문자에서 대문자로 전환할 문자열
	char* ptr1 = "c language"; 
	char* ptr2 = "c language";
	char* ptr3 = "c language";
	char* ptr4 = "c language";
	char* ptr5 = "c language";
	int i = 0, j = 0; // 제어변수
	
	// 자료처리 및 출력 1: 포인터변수와 증감연산자를 이용하여 문자열을 대문자로 전환 (포인터변수 저장주소 갱신)
	while (*ptr1) // "*ptr1"에 저장된 값이 null문자가 아닐 때까지 반복문 수행 <=> 조건문: *ptr1 != '\0'
		printf("%c", *(ptr1++)-32); // (1번 참고)
	printf("\n");

	// 자료처리 및 출력 2: 포인터변수와 반복문을 이용하여 문자열을 대문자로 전환 (포인터변수 저장주소 유지) #1
	for (i = 0; *(ptr2 + i); i++)
		printf("%c", *(ptr2 + i) - 32); // (2번 참고)
	printf("\n");

	// 자료처리 및 출력 3: 포인터변수와 반복문을 이용하여 문자열을 대문자로 전환 (포인터변수 저장주소 유지) #2
	while(*(ptr3 + j))
		printf("%c", *(ptr3 + j++) - 32); // (3번 참고)
	printf("\n");

    // 자료처리 및 출력 4: toupper 라이브러리 함수를 이용하여 문자열을 대문자로 전환
	while (*ptr4)
		printf("%c", toupper(*(ptr4++))); // 입력받은 알파벳을 무조건 대문자로 변경 (4번 참고)
	printf("\n");

	// 자료처리 및 출력 5: _toupper 라이브러리 함수를 이용하여 문자열을 대문자로 전환
	while (*ptr5)
		printf("%c", _toupper(*(ptr5++))); // 입력받은 대문자 알파벳을 소문자로 변경 (4번 참고)
	printf("\n\n");

	return 0; // 실행종료
} // main함수 종료

// 1) *(ptr1++)의 의미 => 주의) ptr1에 저장된 주소는 계속 갱신되어 기존 저장주소를 소실
// 처리#1: ptr1++; <=> ptr1 = ptr1; (ptr1에 저장된 주소를 ptr1에 저장) -> ptr1 = ptr1 + 1; (ptr1에 자료크기만큼 증가시킨 주소로 갱신)
// 처리#2: *(ptr1++); <=> *(ptr1); (ptr1에 저장된 주소에 저장된 값 호출) -> *(ptr1+1); (ptr1에서 자료크기만큼 증가시킨 주소에 저장된 값 호출)
// (단, ptr1은 포인터변수이며 이 변수에는 주소값이 저장)
//
// 2) *(ptr2+i)의 의미 => 주의) ptr2에 저장된 주소는 계속 유지
// 처리#1: i=0: ptr2 + 0 -> *(ptr2+0) -> *ptr2(시작주소에 저장된 값 호출) -> 'c'
// 처리#2: i=1: ptr2 + 1 -> *(ptr2+1) -> *(ptr2+1) (시작주소에서 자료크기만큼 증가시킨 주소에 저장된 값 호출) -> ' '(공백문자)
// ...
// 마지막 처리: 'e'
// 
// 3) *(ptr3 + j++)의 의미 => 주의) ptr3에 저장된 주소는 계속 유지
// 처리#1: j=0: ptr2 + 0 -> *(ptr2+0) -> *ptr2(시작주소에 저장된 값 호출) -> 'c' -> j의 값을 0에서 1로 증가시킴
// 처리#2: j=1: ptr2 + 1 -> *(ptr2+1) -> *(ptr2+1) (시작주소에서 자료크기만큼 증가시킨 주소에 저장된 값 호출) -> ' '(공백문자) -> j의 값을 1에서 2로 증가시킴
// ...
// 마지막 처리: 'e'
// 주의) while(*(ptr3 + j))인 이유: while문 내부에서 증감연산(갱신)을 하므로 "ptr3 + j++"이 아닌 "ptr3 + j"로 설정해야 함
//
// 4) 아래의 라이브러리 함수를 사용하기 위해서는 전처리기로 <ctype.h>를 포함해야 함 
// toupper("변환문자열") 또는 toupper(배열명): 입력받은 알파벳을 무조건 대문자로(to upper case) 바꾸는 라이브러리 함수
// _toupper("변환문자열") 또는 _toupper(배열명): 입력받은 소문자 알파벳을 대문자로 바꾸는 라이브러리 함수
// 
// 중요개념) 
// 포인터변수명: 문자열의 시작주소
// * 포인터변수명: 문자열의 시작주소에 저장된 값
// *(포인터변수명+i): 문자열의 시작주소에서 i * 1바이트(char의 자료크기)만큼 증가한 주소에 저장된 값