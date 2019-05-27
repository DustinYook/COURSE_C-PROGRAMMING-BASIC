// 프로그램 목적: 이름, 나이, 학년, 학점을 입력받아 출력하는 프로그램
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	char name[10] = "name"; // 배열공간명[글자수+1]
	int age = 0;
	int grade = 0; 
	char score = 'a';

	// 자료입력 및 출력1: 이름입력
	printf("이름을 입력해주십시오: "); // printf()를 통해 입력받을 값에 대해 설명
	scanf_s("%s", name, sizeof(name)); // scanf_s()를 통해 입력받음
	printf("당신의 이름은 \"%s\"입니다.\n\n", name);

    // 자료입력 및 출력2: 나이, 학년입력
	printf("나이와 학년을 입력해주십시오: ");
	scanf_s("%d %d", &age, &grade); // scanf_s()의 큰따옴표 안에는 형식지정자만 있어야 함 (문자열 들어가면 안됨)
	printf("당신의 나이는 \"%d살\"이고 학년은 \"%d학년\"입니다.\n\n", age, grade);
	
	// 자료입력 및 출력3: 학점입력
	printf("학점을 입력해주십시오: "); 
	scanf_s("%c", &score, sizeof(score)); // 배열 및 포인터변수는 주소연산자 붙이지 않음 => 변수가 주소이기 때문
	printf("당신의 학점은 \"%c\"입니다.\n", score); // scanf_s()를 통해 입력받은 값을 처리하여 출력

	return 0; // 실행종료
} // main함수 종료
// 문자 또는 문자열을 입력받는 경우: scanf_s("형식지정자", 변수명, sizeof(변수명));의 형식을 준수해야 에러나지 않음