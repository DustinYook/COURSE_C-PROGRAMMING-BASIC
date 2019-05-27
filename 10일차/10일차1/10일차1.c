#include <stdio.h>

int main(void)
{
	char input[5];
	char pw[5] = { 'c','o','d','e' };
	char i = 0; // 제어변수
	char match_count = 0; // 각 문자 맞은 횟수 카운트

	while (1) // while의 조건식이 '1(참)'이므로 무한루프가 생성
	{
		IN:
		// 자료입력
		printf("4자리 비밀번호를 입력해주십시오: ");
		scanf_s("%s", &input, sizeof(input));

		// 입력규칙 준수여부 판단
		if (sizeof(input) / sizeof(char) == 5)
		{
			for (i = 0; i < 5; i++)
			{
				if (input[i] == pw[i])
					match_count++;
			}
			break;
		}
		else
			printf("입력하신 비밀번호가 잘못되었습니다. 다시 한 번 입력해주십시오.\n\n");
	}
	
	if (match_count == 5)
		printf("로그인 되었습니다.\n\n");
	else
	{
		printf("입력하신 비밀번호가 잘못되었습니다. 다시 한 번 입력해주십시오.\n\n");
		goto IN;
	}
		
	return 0;
}