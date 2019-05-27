// 프로그램 목적: 배열을 이용한 문자열의 출력 및 배열의 대입 & 비교연산
#include <stdio.h>
#include <string.h> // strcpy()와 strcmp()를 사용하기 위한 전처리기

void Compare(int cmp_result, char string2[5], char string3[5]); // 함수선언

int main(void) // main()함수의 시작
{
	// 변수선언
	int i = 0; // 제어변수
	char string1[] = { 'j','o','h','n' }; // 출력변수: 문자열의 끝에는 반드시 NULL문자 들어감 (NULL은 문자열의 끝을 의미)
	char string2[] = "john"; // 출력변수: 'j','o','h','n' + '\0' (문자열은 문자의 배열)
	char string3[] = "john"; // 비교변수
	int cmp_result = 0; // 출력변수: 문자열 비교 결과 저장
	
	// 방법1: 배열과 반복문을 이용한 문자열의 출력
	printf("문자열을 한 글자씩 출력하는 경우: "); // 배열은 '0'부터 시작 => NULL만날 때까지 출력
	for (i = 0; i < 5; i++)
		printf("%c", string1[i]);

	// 방법2: 배열에 저장된 문자열의 출력
	printf("\n\n문자열을 한꺼번에 출력하는 경우: ");
	printf("%s\n\n", string2); // 1차 함수호출

	// 문자열의 비교연산1: 대입이전
	printf("대입연산을 수행하기 이전 두 문자열의 비교연산\n");
	Compare(cmp_result, string2, string3);
	
	// 문자열의 대입연산
	strcpy_s(string2, sizeof(string2),"jack");
	printf("문자열 대입연산을 수행하는 경우: ");
	printf("%s\n\n", string2); // 2차 함수호출

	// 문자열의 비교연산2: 대입이후
	printf("대입연산을 수행한 이후 두 문자열의 비교연산\n");
	Compare(cmp_result, string2, string3);
    
	return 0; // 실행종료
} // main()함수의 종료

void Compare(int cmp_result, char string2[5], char string3[5]) // 함수정의: main()함수에서 cmp_result, string2 string3의 인수값을 전달받아 결과값 반환
{
	cmp_result = strcmp(string2, string3);
	if (cmp_result == 0) // 두 문자열이 일치하면 아래 명령문 실행(strcmp은 피연산자1과 2를 뺀 결과를 반환)
		printf("=> 두 문자열은 일치합니다.\n\n");
	else // 두 문자열이 일치하지 않으면 아래 명령문 실행
		printf("=> 두 문자열은 일치하지 않습니다.\n\n");
}

// string에 관한 함수: 반드시 전처리기로 #include <string.h> 사용해야 함
// 1) strcpy(피 대입 변수명, "저장할 문자열"); => 문자열의 대입('=') 연산; string copy
// 2) strcmp(피 비교 변수명, 기준 변수명); => 문자열의 비교('==') 연산; string compare (비밀번호 코딩에 사용)
// 주의) char str[10] = {'a','\0', 'b','\0'); => 'a'만 출력 (첫 번째 NULL문자 만나면 컴파일러는 그것이 문자열의 끝이라 간주하기 때문)
// 문자열의 선언: char name[N+1]="문자개수(N)"; => 문자열의 마지막에는 NULL문자가 들어가기 때문에 배열의 크기는 문자의 개수보다 항상 '1'이 큼
// 문자열 = 문자의 배열 (문자상수의 결합), NULL문자를 통해 문자열의 끝을 표시
// 문자열 대입연산 => 배열 이용해서 하나씩 변경 or strcpy(variable, "New string"); 