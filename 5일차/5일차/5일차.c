// 프로그램 목적: 정수 3개를 입력받아 묵시적,명시적 형변환을 이용하여 평균을 출력
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int num1, num2, num3; // 입력변수: 평균을 구할 3개의 정수 => 굳이 초기화 하지 않아도 됨
	double average = 0.0; // 출력변수: 평균 => 초기화를 해주는 것이 좋음

	// 자료입력
	printf("정수 3개를 입력해주십시오: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	// 자료처리 및 출력 1: 묵시적 형변환을 이용한 경우
	average = (num1 + num2 + num3) / 3.;
	printf("방법1: 입력하신 세 정수의 평균은 \"%.2lf\"입니다.\n\n", average);

	// 자료처리 및 출력 2: 명시적 형변환을 이용한 경우 (1)
	average = ((double)num1 + (double)num2 + (double)num3) / 3;
	printf("방법2: 입력하신 세 정수의 평균은 \"%.2lf\"입니다.\n\n", average);

	// 자료처리 및 출력 3: 명시적 형변환을 이용한 경우 (2)
	average = ((double)num1 + num2 + num3) / 3;
	printf("방법3: 입력하신 세 정수의 평균은 \"%.2lf\"입니다.\n\n", average);

	return 0; // 실행종료
} // main함수 종료