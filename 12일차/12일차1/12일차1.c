// 프로그램 목적: 사용자 정의 헤더파일의 이용
#include "myheader.h"

int main(void)
{
	// 변수선언
	int x = 10, y = 5;
	// 자료처리 및 출력
	printf("두 수의 합: %d\n", SumTwo(x, y)); // 사용자정의 헤더파일로 부터 함수호출

	return 0; // 실행종료
}

// 사용자 정의 헤더파일을 만드는 법
// 전처리기: #include "헤더파일명.h"
// 헤더파일의 생성: solution explore의 header files에서 소스파일 생성과 동일한 방식으로 생성 
// (단, 반드시 #include의 헤더파일명과 동일해야 함)
// 주의) 헤더파일이 소스파일과 다른 곳에 저장되어 있으면 반드시 여기에 저장경로를 명시해야 함
