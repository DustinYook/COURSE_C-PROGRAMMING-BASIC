// 프로그램 목적: 매크로상수의 사용법 학습
#include <stdio.h>
#include <math.h> // pow함수를 사용하기 위한 헤더파일
#define PI 3.14 // 매크로상수1: 3.14라는 정수상수를 PI로 대체
#define Area(P,R,N) P*pow(R,N) // 매크로상수2: P*pow(R,N)이라는 수식을 Area라는 함수로 정의

int main(void) // main함수 시작
{
	// 변수선언
	double radius = 0.0;
	
	// 자료입력 및 처리, 결과출력
	printf("반지름의 길이를 입력해주십시오: ");
	scanf_s("%lf", &radius);
	printf("원의 넓이는 %.2lf입니다.\n\n", Area(PI,radius,2));

	return 0; // 실행종료
} // main함수 종료