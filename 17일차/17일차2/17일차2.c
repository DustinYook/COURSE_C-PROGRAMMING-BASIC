// 프로그램 목적: 
#include <stdio.h>
#include <stdlib.h> // 파일입출력함수가 정의된 헤더파일

int main(void) // main함수 시작
{
	// 변수선언
	FILE* fp; // 파일을 간접참조하는 포인터변수 => 파일의 시작주소를 저장
	char ch = 'a'; 
	errno_t err; // 파일정상실행 여부판단 변수
	
	// 파일의 정상실행 여부판단
	err = fopen_s(&fp, "basic.txt", "w"); 
	if (err != 0)
	{                                                     
		printf("파일이 정상적으로 열리지 않았습니다.\n\n");
		exit(1); // 강제종료: 정상적인 종료가 아님 => return 0;는 정상종료
	}

	printf("문자 하나를 입력하십시오.\n");
	ch = getchar(); // 문자상수 하나를 입력받아 ch변수에 저장

	while (ch != EOF) // EOF = End of File (입력을 종료하기 위해서는 <ctrl>+'c'를 입력해야 함)
	{
		fputc(ch, fp); // fputc(파일에 입력할 문자, 파일 포인터변수명);
		ch = getchar();
	}

	printf("파일 입력이 종료되었습니다.\n\n");
	fclose(fp); // 파일닫기

	return 0; // 실행종료
} // main함수 종료

// 1) 파일처리 
// 1단계) 파일입출력함수가 정의된 헤더파일포함: <stdlib.h> = standard library
// 2단계) 파일 포인터변수 선언: 파일시작주소를 저장하는 포인터 (파일개수만큼 필요)
// 3단계) "errno_t err;"의 선언 => errno_t라는 자료형은 오류에 대한 리턴값을 저장하는 자료형이며
//       '0'이 반환되어 저장되면 정상적으로 실행, 그 이외의 값이 반환되어 저장되면 오류가 발생했다는 의미
// 참고) errno = error number
// 4단계) "err = fopen_s(&fp, "basic.txt", "w");"과 "if(err != 0)"을 이용한 파일의 정상실행여부 판단
//        fopen_s(&파일포인터변수명, "쓰기를 수행할 파일명", "용도") => 정상적으로 파일이 열리면 '0'의 값을 반환 (그 이외에는 '0'이 아닌 값 반환)
//        용도에는 'w(쓰기)', 'r(읽기)', 'a(덧붙여 쓰기)'등 용도를 지정해야함 (w: write, r: read, a: append)
// 참고) 3단계와 4단계를 통합해서 if(fopen_s(&fp, "basic.txt", "w") != 0)으로 써도 무방