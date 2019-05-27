// 프로그램 목적: 점수를 입력받고 점수대에 따라서 학점 부여 (switch~case문 이용)
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int score = 0; // 입력변수: 점수입력
	char grade[5] = { 'A', 'B', 'C', 'D', 'F' }; // 출력변수: 평점출력
	char result = 'a';

	while (1) // 조건문이 '1(참)'이므로 무한루프 생성
	{
		// 자료입력
		printf("0부터 100사이의 점수를 입력해주십시오: ");
		scanf_s("%d", &score);

		// 입력규칙 준수여부 판단
		if (score>=0 && score<=100)
			break; // 입력규칙 준수 시 무한루프 탈출
		printf("잘못입력하셨습니다. 다시 한 번 입력해주십시오.\n\n\a\a\a\a");
	}
	// 자료처리 및 출력
	switch (score / 10)
	{
	case 10:
	case 9: result = grade[0];
		break;
	case 8: result = grade[1];
		break;
	case 7: result = grade[2];
		break;
	case 6: result = grade[3];
		break;
	default: result = grade[4];
	}
	printf("입력하신 점수에 해당하는 평점은 \"%c\"입니다.\n\n", result);

	return 0; // 실행종료
} // main함수 종료