// 프로그램 목적:
#include <stdio.h>
#include <string.h> // 문자열에 관련된 전처리기

int main(void)
{
	int i = 0;
	char string[] = { 'A','B','C','\0'}; // 문자열의 끝에는 반드시 NULL('\0')문자가 들어가야 하고 이는 문자열의 끝을 의미
	char student[] = "john"; // 'j','o','h','n' + '\0'
	strcpy(student, "suk"); // student = "suk"; (이런식으로 사용 불가, 문자열의 경우 저런식으로 대입문을 이용할 수 없음)
	
	// strcpy(피 대입 변수, "저장할 문자열"); => 문자열의 대입문은 이 형식으로 사용 (단, <string.h>반드시 전처리기에 포함)

	printf("문자열을 동시에 출력하는 경우\n");
	printf("학생의 이름은 %s이다.\n\n", student);
	printf("문자열을 한 글자씩 출력하는 경우\n");

	for (i = 0; string[i] != '\0'; i++) // 배열은 '0'부터 시작 => NULL만날 때까지 출력
	{
		printf("%c\n", string[i]);
	}
		
	return 0; // 실행종료
}


