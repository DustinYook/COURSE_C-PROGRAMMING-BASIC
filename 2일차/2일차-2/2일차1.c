// 프로그램 목적: 표현형식 조절
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	float a = 12.34F; // 저장할 때는 넘치는 범위는 버림, 표현할 때에는 반올림
	double b = 56.78; // 기본적으로 저장할 때 double형으로 인식하여 저장함

	// 결과출력1
	printf("소숫점 이하 자리수를 조정하지 않은 경우(초깃값)\n");
	printf("float형 a의 값은 %f입니다.\n", a); 
	printf("double형 b의 값은 %lf입니다.\n\n", b);

	// 결과출력2
	printf("소숫점 둘째자리까지 표시하도록 표현형식을 조정한 경우\n");
	printf("float형 a의 값은 %.2f입니다.\n", a); // ".2"는 소숫점 아래 둘째자리까지 표현한다는 의미 (반올림)
	printf("double형 b의 값은 %.2lf입니다.\n\n", b);

	// 결과출력3
	printf("부호를 표시하도록 표현형식을 조정한 경우\n");
	printf("float형 a의 값은 %+.2f입니다.\n", a);
	printf("double형 b의 값은 %+.2lf입니다.\n\n", b);

	// 결과출력4
	printf("6자리를 확보하여 왼쪽 정렬하도록 표현형식을 조정한 경우\n");
	printf("float형 a의 값은 %-6.2f입니다.\n", a); // '-'는 왼쪽 정렬을 의미
	printf("double형 b의 값은 %-6.2lf입니다.\n\n", b); // '6'은 6칸을 할당한다는 의미

	// 결과출력4
	printf("6자리를 확보하여 빈자리에 0을 표시하도록 표현형식을 조정한 경우\n");
	printf("float형 a의 값은 %-06.4f입니다.\n", a);
	printf("double형 b의 값은 %-06.4lf입니다.\n\n", b);

	return 0; // 실행종료
} // main함수 종료