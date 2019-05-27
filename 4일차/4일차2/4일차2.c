// 프로그램 목적: 반지름의 길이를 입력받아 원의 넓이를 출력
#include <stdio.h> // printf()와 scanf_s()를 사용하기 위한 전처리기
#include <math.h>  // pow()함수를 사용하기 위한 전처리기
#define PIE 3.14   // 사용자 정의 상수의 선언

int main(void) // main함수 시작
{
	// 변수선언
	int radius;
	double area = 0.0;

	// 자료입력
	printf("원의 반지름의 길이를 입력해주십시오: ");
	scanf_s("%d", &radius); // 숫자의 경우 굳이 sizeof(변수명)을 넣지 않아도 됨

	// 자료처리 및 출력
	area = PIE * pow(radius, 2); // pow(a,b) == a^b
	printf("반지름의 길이가 \"%d\"인 원의 넓이는 \"%.2lf\"입니다.\n\n", radius, area);

	return 0; // 실행종료
} // main함수 종료

  // 중요) 프로그램은 "변수선언->자료입력->자료처리->결과출력"으로 구성
  // 참고) 초기화는 시스템 안정화에 도움 => 단, 자료입력받는 경우에는 굳이 초기화 할 필요는 없다 생각