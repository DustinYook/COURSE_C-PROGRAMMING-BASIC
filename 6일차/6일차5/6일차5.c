// 프로그램 목적: 입력점수에 따른 평점출력
#include <stdio.h>

int main(void)
{
	// 변수선언
	int score; // 입력자료: 점수
	char grade[] = { 'A','B','C','D','F' }; // 처리자료: 평점
	char result = 'a'; // 출력자료: 점수에 해당하는 평점

					   // 자료입력 및 입력규칙 준수여부 판별
	while (1)
	{
		// 자료입력문
		printf("당신의 점수를 0부터 100사이의 정수형태로 입력해주십시오: ");
		scanf_s("%d", &score);

		// 입력규칙 준수여부 판단
		if (score >= 0 && score <= 100)
			break;
		printf("잘못입력하셨습니다. 다시 한 번 입력해주십시오.\n\n\a\a\a\a");
	}

	// 자료처리 및 출력
	switch (score / 10)
	{
	case 10: // 100점대이고
	case 9: // 90점대인 경우
		result = grade[0]; // A학점 출력
		break; // switch문 탈출
	case 8: // 80점대인 경우
		result = grade[1]; // B학점 출력
		break; // switch문 탈출
	case 7: // 70점대인 경우
		result = grade[2]; // C학점 출력
		break; // switch문 탈출
	case 6: // 60점대인 경우
		result = grade[3]; // D학점 출력
		break; // switch문 탈출
	default: // 60점 미만인 경우
		result = grade[4]; // F학점 출력
		break; // switch문 탈출
	}
	printf("당신의 점수는 \"%d점\"이고 평점은 \"%c\"입니다\n\n", score, result);

	return 0; // 실행종료
}

// char grade;
// if(score>=90)
// grade ='A';
// else if(score>=80)
// grade = 'B';
// else 
// printf("당신의 성적은 %c입니다.",grade);

// char grade[3] = {'a','b','c'};
// 문자는 assign연산자로 대입가능하나 문자열은 strcpy(변수명, "문자열")함수를 이용해야 함
// 1) char name[10]; (X)
//    name = "육동현"; 
// 2) char name[10] = "육동현"; (O)

// switch(정수형)
// {
//    case 11:
//    case '=':
//    case 'a':
//    default: 나머지 처리
// }  => 일단 "case:" 먼저 써주고 실행문과 "break;"를 써 줌  