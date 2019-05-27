#include <stdio.h>
#include <stdlib.h> 
#define LINE 50 // 사용자정의 함수 처리

int main(void) // main함수 시작
{
	FILE* fp1; // 2) 파일포인터: 사용할 파일 개수만큼 선언
	FILE* fp2; 
	char line[LINE];
	
	if(fopen_s(&fp1, "lineinput.txt", "r") != 0) // 읽기용도로 파일을 열고 정상적으로 열리면 '0'을, 파일이 없거나 용량초과이면 '0이외의 값'을 반환
	{
		printf("파일을 열 수 없습니다.\n\n");
		exit(1); // 강제종료
	}

	fopen_s(&fp2, "linetarget.txt", "w"); // 쓰기용도로 파일을 열고 파일 존재 시 백지화 후 새롭게 기록, 파일 미존재 시 새 파일 생성   

	while (fgets(line, LINE, fp1) != NULL) 
		fputs(line, fp2);

	fclose(fp1); // 파일닫기1
	fclose(fp2); // 파일닫기2

	return 0; // 실행종료
} // main함수 종료


// 뭉텅이로 했을 때 파일의 끝의 판단은 NULL로 하고 한문자로 했을 때 파일의 끝 판단은 EOF(End of File)로 함
// 파일의 끝이거나  // 30글자씩 읽어들임 <-> (ch=fgetc(fp1) != EOF) // fp1에서 1글자씩 읽어들임
// 1) 파일처리함수 정의: f가 붙은 처리함수