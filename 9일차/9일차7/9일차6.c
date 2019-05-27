// 프로그램 목적: 각 과목의 평균을 출력
#include <stdio.h>

int main(void) // main()함수 시작
{
	// 변수선언
	int score[3][3] = { {90, 80, 90}, {70, 100, 100}, {80, 90, 90} };
	char subject[3][15] = { "과목1", "과목2", "과목3" }; 
	int i = 0, j = 0;
	int sum = 0;
	double average = 0.0;

	// 자료처리 및 출력
	for (j = 0; j <3; j++) // 외부 for문: 배열의 행 통제 (세 과목) => 외부 for문은 "기준" 
	{
		for (i = 0; i < 3; i++) // 내부 for문: 배열의 열 통제 (세 사람)
		{
			sum = sum + score[i][j]; // 반복문 종료시 j는 3이 됨
		}
		average = (double)sum / i;
		printf("\"%s\"과목의 평균: %.2lf\n\n", subject[j], average);

		sum = 0; // 주의) 다음 과목의 평균을 구하기 위해서 sum을 초기화 함, 누락되면 누적해서 평균을 구함
	}

	return 0; // 실행종료
} // main()함수 종료
  // 문자열 여러개 순서대로 출력할 때는 2차원 배열 형태로 출력