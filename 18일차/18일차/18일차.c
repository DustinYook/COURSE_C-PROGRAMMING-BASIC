// 프로그램 목적:
#include <stdio.h>
#include <stdlib.h>

struct student // 구조체 정의
{
	char name[10];
	char address[10];
	int age;
};

typedef struct student student; // 구조체 재정의

int main(void) // main함수 시작
{
	FILE* fp1; // 파일 포인터 선언	
	student st1 = { "홍길동", "서울", 30 }; // 구조체 변수선언
	student st2 = { "장발장", "부천", 24 };
	student st3; // 입력변수

	if (fopen_s(&fp1, "basic.txt", "w") != 0)
	{
		printf("파일을 열 수 없습니다.\n\n");
		exit(1);
	}

	fprintf(fp1, "%s %s %d\n", st1.name, st1.address, st1.age);
	fprintf(fp1, "%s %s %d\n", st3.name, st3.address, st3.age);
	fclose(fp1); 

	if (fopen_s(&fp1, "basic.txt", "r") != 0)
	{
		printf("파일을 열 수 없습니다.\n\n");
		exit(1);
	}

	fscanf_s(fp1, "%s %s %d\n", st2.name, sizeof(st2.name), st2.address, sizeof(st2.address), &st2.age); // 파일에서 읽어옴
	printf("이름: %s, 거주지: %s, 나이: %d \n", st2.name, st2.address, st2.age); // 왜 한번에 출력안됨?

	fscanf_s(fp1, "%s %s %d\n", st2.name, sizeof(st2.name), st2.address, sizeof(st2.address), &st2.age); // 파일에서 읽어옴
	printf("이름: %s, 거주지: %s, 나이: %d \n\n", st2.name, st2.address, st2.age);

	fclose(fp1); // 파일닫기
	return 0;  // 실행종료
} // main함수 종료