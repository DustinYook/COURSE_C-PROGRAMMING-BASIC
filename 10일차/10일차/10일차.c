// 프로그램 목적: 아이디와 패스워드를 입력받고 맞으면 로그인 시킴
#include <stdio.h>
#include <string.h> // strcmp()를 쓰기위한 전처리기

int main(void)
{
	// 변수선언
	char input[5]; // 입력변수: 비밀번호를 입력받음 (배열 초기화를 하지 않음 <=> 모든 원소에는 '0'의 값이 할당)
	char pw[5] = "code"; // 비교변수: 비밀번호 (문자열 변수를 배열을 이용해서 선언할 때에는 반드시 NULL문자의 크기를 더한 크기로 선언해야 함)

	while (1) // while의 조건식이 '1(참)'이므로 무한루프가 생성
	{
		// 자료입력
		printf("4자리 비밀번호를 입력해주십시오: ");
		scanf_s("%s", &input, sizeof(input));

		// 입력규칙 준수여부 판단
		if ((sizeof(input) / sizeof(char) == 5) && (strcmp(input, pw) == 0))
		{
			printf("로그인 되었습니다.\n\n");
			break;
		}	
		else
			printf("입력하신 비밀번호가 잘못되었습니다. 다시 한 번 입력해주십시오.\n\n");
	}
	
	return 0; // 실행종료
}
// 로그인 알고리즘
// 방법1: strcmp(a, b)를 이용 => a와 b를 마이너스 연산한 결과를 반환 "strcmp(a,b)==0"이면 비밀번호가 일치 (strcmp는 <string.h>라는 라이브러리가 필요)
// 방법2: 문자상수끼리 비교하는 방법 => ex) if((pw1=='c')&&(pw2=='o')&&(pw3=='d')&&(pw4=='e')) * 이거 맞나요?
// 참고) <ctrl> + <break>/<c>: 프로그램 종료