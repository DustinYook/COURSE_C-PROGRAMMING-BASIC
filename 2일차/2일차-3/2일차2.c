// 프로그램 목적: 문자상수의 변환관계
#include <stdio.h>

int main(void)
{
	printf("소문자 a의 ASCII코드값은 \"%d\"입니다.\n", 'a');
	printf("소문자 b의 ASCII코드값은 \"%d\"입니다.\n", 'b'); 
	printf("대문자 A의 ASCII코드값은 \"%d\"입니다.\n", 'A'); 
	printf("대문자 B의 ASCII코드값은 \"%d\"입니다.\n\n", 'B');

	printf("ASCII코드값 97은 \"%c\"입니다.\n", 97);
	printf("ASCII코드값 98은 \"%c\"입니다.\n", 98);
	printf("ASCII코드값 65은 \"%c\"입니다.\n", 65);
	printf("ASCII코드값 66은 \"%c\"입니다.\n\n", 66);

	printf("대문자 A를 소문자 a로 전환: %c\n", 65 + 32);
	printf("소문자 b를 대문자 B로 전환: %c\n", 98 - 32);
	printf("대문자 A를 대문자 Z로 전환: %c\n", 65 + 25);
	printf("소문자 z를 소문자 a로 전환: %c\n\n", 122 - 25);

	return 0; // 실행종료
}
// 'a'대신에 "a"를 사용하면 논리적 오류가 발생함 => 문자열로 인식하기 때문
// 암기) 'a'=97,'A'=65 (차이: 32) => 대소문자 변환 알고리즘에 이용, 알파벳: 26개