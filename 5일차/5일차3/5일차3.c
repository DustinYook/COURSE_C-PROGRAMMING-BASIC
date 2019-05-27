// 프로그램 목적: 점수를 입력받고 점수에 해당하는 평점을 출력
#include <stdio.h>

int main(void) // main함수 시작
{
	// 변수선언
	int score; // 입력변수: 점수입력
	char grade[5] = { 'A', 'B', 'C', 'D', 'F' }; // 제어변수
	char result = 'a'; // 출력변수: 평점출력

	while (1) // 조건문이 '1(참)'이므로 무한루프 생성
	{
		// 자료입력
		printf("0점과 100점 사이의 점수를 입력해주십시오: ");
		scanf_s("%d", &score);

		// 입력규칙 준수여부 판단
		if (score >= 0 && score <= 100)
			break; // 입력규칙 준수 시 무한루프 탈출
		printf("잘못입력하셨습니다. 다시 한 번 입력해주십시오.\n\n\a\a\a\a");
	}
	// 주의) 20행 밑으로는 입력규칙 준수된 경우만 다룸: (score>=0) && (score<=100)
	if (score >= 90) // 100점 이하 90점 이상
		result = grade[0];
	else if (score >= 80) // 90점 미만 80점 이상
		result = grade[1];
	else if (score >= 70) // 80점 미만 70점 이상
		result = grade[2];
	else if (score >= 60) // 80점 미만 70점 이상
		result = grade[3];
	else // 70점 미만
		result = grade[4];
	printf("\"%d\"점은 \"%c\"학점입니다.\n\n", score, result);

	return 0; // 실행종료
}
// 다수 조건 부여 시 중첩 if문보다 else if가 더 바람직
// 나머지 처리의 경우 if 대신 else로 처리할 것
// 중요) "a > b" 읽는 방법 => "기준값 부등호 비교값" 
// 중요) 조건 AND 연산자(&&) => 두 조건이 모두 참일 경우에만 '1(참)'의 값을 반환함, 범위와 배수를 나타낼 때 이용
// 주의) 0<input<2 (x), 0<input && input<2 (x) => 반드시 변수는 좌측에 위치해야 하며 "input>0 && input<2"와 같은 형태로 나타내어야 함
// 참고) 문자상수역시 범위를 나눌 수 있음 => input>='A' && input<='Z'