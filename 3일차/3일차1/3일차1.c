// 프로그램 목적: getchar(), putchar(), gets_s(), puts()의 사용 
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	char name[20];
	char input_grade;
	char preset_grade = 'A';

	// 자료입력1: puts(), gets_s()함수 사용하여 문자열 출력 및 입력 수행
	puts("이름을 입력해주십시오: "); 
	gets_s(name, sizeof(name)); // name이라는 변수공간에 이름을 입력받아 저장 
	puts(name); // gets_s()를 통해 name이라는 변수공간에 저장한 자료를 불러와서 출력
	printf("\n\n");

	// 자료입력2: putchar(), getchar()함수 사용하여 문자상수 출력 및 입력 수행
	puts("학점을 입력해주십시오: ");
	input_grade = getchar(); // getchar()를 통해 입력받은 문자를 grade라는 변수공간에 저장 
	// 주의) getchar(input_grade);와 같이 표현하면 문법적 오류 발생, 반드시 assign('=')연산자를 이용하여 할당하는 형식 취해야 함
	putchar(input_grade);
	printf("\n\n");
	
	// 자료출력: putchar() 바로 문자상수를 넣어 출력하는 경우
	puts("변수를 이용하지 않고 바로 문자상수를 출력하는 경우: ");
	putchar('A');
	printf("\n\n");

	return 0; // 실행종료
} // main함수 종료

// puts = put string (문자열 출력 명령어), gets_s = get string (문자열 입력 명령어)
// puts("문자열"); 또는 puts(변수명); <=> printf()와 대응
// 주의) printf()의 경우 옆에 커서 붙지만 puts()는 아래 커서가 붙음
// gets_s(변수명, sizeof(변수명)); <=> scanf_s()와 대응
// 주의) 띄어쓰기를 포함하면 scanf_s()대신 gets()를 사용해야 함
// => scanf_s()는 띄어쓰기를 구분자로 간주하나 gets_s()는 입력문자로 간주하기 때문

// putchar = put character (문자상수 출력 명령어), getchar = get character (문자상수 입력 명령어)
// putchar('문자상수'); 또는 putchar(변수명); 
// 주의) putchar()는 문자열은 출력하지 못함
// 변수공간명 = getchar(); 
// 주의) getchar(변수공간명);과 같이 사용하면 문법적 오류 발생, 반드시 위의 형식을 지켜서 코딩해야 함