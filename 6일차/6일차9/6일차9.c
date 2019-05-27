// 프로그램 목적: 60점 이상이면 합격, 미만이면 불합격을 출력
#include <stdio.h>

int main(void)
{
	int score;

	printf("점수를 입력해주십시오: ");
	scanf_s("%d", &score);

	switch (score / 60) // 중요) 범위를 나눌 때에는 나눔 => 이 경우 60점 이상이면 1, 미만이면 0의 값 반환 
	{
	case 1: // 60점 이상인 경우
		printf("합격입니다.\n");
		break; // 안써주면 논리적 오류(합격, 불합격 안내 모두 출력) 발생
	case 0: // 60점 미만인 경우
		printf("불합격입니다.\n");
	}
	return 0; // 실행종료
}