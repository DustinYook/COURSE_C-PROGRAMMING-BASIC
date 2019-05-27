// 프로그램 목적: 사각형의 가로와 세로의 길이를 입력받고 면적을 출력
#include <stdio.h>

int Rectangle_Area(int width, int length); // 함수선언

int main(void) // main()함수 시작
{
	// 변수선언
	int num1 = 0, num2 = 0; // 입력변수

	// 자료입력
	printf("넓이를 구할 사각형의 가로와 세로의 길이를 차례로 입력해주십시오: ");
	scanf_s("%d %d", &num1, &num2);

	// 결과출력
	printf("가로와 세로가 각각 \"%d\", \"%d\"인 사각형의 넓이는 \"%d\"입니다.\n\n", num1, num2, Rectangle_Area(num1, num2)); // 함수호출

	return 0; // 실행종료
} // main()함수 종료

int Rectangle_Area(int width, int length) // 함수정의
{
	int result = width * length; // num1->width, num2->length에 인수값이 전달되어 자료처리 수행
	return result; // 자료처리 결과값을 함수호출 부분에 반환
}
