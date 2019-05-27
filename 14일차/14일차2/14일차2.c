// 프로그램 목적: 라이브러리 함수 strcpy(), strcmp(), strcat()의 사용
#include <stdio.h>
#include <string.h> // 라이브러리 함수 strcpy_s(), strcmp(), strcat_s()을 사용하기 위한 전처리기

int main(void) // main함수 시작
{
	// 변수선언
	char string1[40] = "C language"; // (1번 참고) 
	char string2[] = "B language";
	char string3[] = "C language";
	char string4[] = " is easy";
	int i = 0; // 제어변수: for문 제어
	int length = strlen(string1); // 문자열의 길이 저장

	// 비교 기준 출력
	printf("1) 아래는 string1, string2, string3의 시작주소부터 저장된 문자열의 값입니다.\n");
	printf("string1에 저장된 문자열은 다음과 같습니다: ");
	for (i = 0; i < length; i++) // 또는 for(i=0; *(string1+i); i++) => 주의) string1는 포인터상수이므로 저장값을 갱신하는 "*string1++"는 사용불가
		printf("%c", string1[i]);
	printf("\n");

	printf("string2에 저장된 문자열은 다음과 같습니다: ");
	for (i = 0; *(string2+i); i++)
		printf("%c", *(string2+i)); // 주의) string2는 포인터상수이므로 저장값을 갱신하는 "*string2++"는 사용불가
	printf("\n");

	printf("string3에 저장된 문자열은 다음과 같습니다: ");
	printf("%s\n\n", string3);

	// 자료처리 및 출력 1: 라이브러리 함수 strcmp()를 이용한 문자열의 비교연산 (2번 참고)
	printf("2) 아래는 기준인 string1과 string2, string3의 비교결과입니다\n");
	printf("string1과 string2는 서로 %s\n", strcmp(string1, string2) ? "다릅니다." : "같습니다.");
	printf("string1과 string3는 서로 %s\n\n", strcmp(string1, string3) ? "다릅니다." : "같습니다.");

	// 자료처리 및 출력 2: 라이브러리 함수 strcpy()를 이용한 문자열의 대입연산 (3번 참고)
	printf("3) 아래는 기준인 string1에 string2의 값을 대입연산한 결과입니다.\n");
	strcpy_s(string1, sizeof(string1), string2); // string1의 시작주소를 지닌 문자열에 string2의 시작주소를 지닌 문자열의 값을 대입
	printf("string1에 string2를 대입연산하면 \"%s\"가 출력됩니다.\n\n", string1);
	
	// 자료처리 및 출력 3: 라이브러리 함수 strcat()를 이용한 문자열의 대입연산 (4번 참고) 
	printf("4) 아래는 기준인 string1에 string4를 연결연산한 결과입니다.\n");
	strcat_s(string1, sizeof(string1), string4); // string1의 시작주소를 지닌 문자열에 string2의 시작주소를 지닌 문자열의 값을 연결(concatenate)
	printf("string1에 string4를 연결연산하면 \"%s\"가 출력됩니다.\n\n", string1);

	return 0; // 실행종료
} // main함수 종료

// 참고) 약자 설명: strcmp = string compare / strcpy = string copy / strcat = string concatenate <참고) concatenate: 쇠사슬 모양으로 연결하다>
//
// 1) strcpy, strcmp, strcat함수를 이용하기 위해서는 반드시 비교기준이 되는 문자열의 크기를 표시해야 한다.
// 예를 들어 char cmp1[] = "C programming";이나 char* cmp1 = "C programming";은 문자열의 크기를 나타내지 않으므로 문법적 오류 발생
// 
// 2) 라이브러리 함수 strcmp()의 문법: strcmp(operand1, operand2) => operand1과 operand2에는 "문자열" 또는 배열명을 넣을 수 있음 (4가지 조합 생성)
// operand1은 "비교기준"이고 operand2는 "비교대상"이다. (주의: operand1은 반드시 문자열의 크기가 명시되어 있어야 함)
// strcmp() 함수의 로직: operand1의 원소의 ASCII 코드값에서 operand2의 원소의 ASCII 코드값을 빼는 연산을 수행
// Case#1: operand1이 operand2와 같으면 "0(거짓)"의 값을 반환
// Case#2: operand1의 값보다 operand2의 값이 크면 "음의 정수값(참)"을 반환 
// Case#3: operand1의 값보다 operand2의 값이 작으면 "양의 정수값(참)"을 반환
// strcmp() 함수는 일반변수의 비교연산자('==')와 동일한 역할을 수행한다.
// 
// 3) 라이브러리 함수 strcpy_s()의 문법: strcpy_s(operand1, sizeof(operand1), operand2)
// => operand1은 반드시 저장할 배열명이 와야하고 operand2에는 "문자열" 또는 배열명을 넣을 수 있음 (2가지 조합 생성)
// 주의) operand1에 저장해야하므로 반드시 상수가 아닌 변수가 와야하며, 입력의 역할을 수행하므로 "_s"가 붙은 형태를 사용하는 것이 바람직하다.
// operand1은 "비교기준"이고 operand2는 "비교대상"이다. (주의: operand1은 반드시 문자열의 크기가 명시되어 있어야 함)
// strcpy() 함수는 일반변수의 대입연산자('=')와 동일한 역할을 수행한다.
// 
// 4) 라이브러리 함수 strcat_s()의 문법: strcat_s(operand1, operand2) 
// => operand1은 반드시 저장할 배열명이 와야하고 operand2에는 "문자열" 또는 배열명을 넣을 수 있음 (2가지 조합 생성) 
// 주의) operand1에 저장해야하므로 반드시 상수가 아닌 변수가 와야하며, 입력의 역할을 수행하므로 "_s"가 붙은 형태를 사용하는 것이 바람직하다.
// operand1에는 operand1과 operand2가 연결된 결과가 저장된다 
// => 위의 예에서 operand1에는 기존 operand1에 저장된 "B language"라는 문자열과 operand2에 저장된 " is easy"라는 문자열이 연결된
// "B language is easy"라는 문자열이 저장됨에 유의해야 한다.
//
// 5) 포인터변수는 문자열 시작주소만 저장되고 문자열 크기가 지정되지 않음 
// 따라서 문자열의 크기인자가 필요한 <string.h>나 <ctype.h>에 정의된 라이브러리 함수는 사용불가
//
// (+) 추후 복습진행시 strcmp()로직을 string_compare()의 사용자 함수로 나타내보기!