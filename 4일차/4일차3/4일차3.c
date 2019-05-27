// 프로그램 목적: 직사각형의 가로와 세로의 길이를 입력받아 면적을 구하는 프로그램 
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int width, length; // 입력자료
	int area = 0; // 출력자료

	// 자료입력
	printf("직사각형의 가로와 세로 길이를 차례로 입력해주십시오: ");
	scanf_s("%d %d", &width, &length);

	// 자료처리 및 출력
	area = width * length; // 직사각형의 넓이를 구하는 공식 = 가로 * 세로
	printf("가로와 세로의 길이가 각각 \"%d\"와 \"%d\"인 직사각형의 넓이는 \"%d\"입니다.\n\n", width, length, area);

	return 0; // 실행종료
} // main함수 종료