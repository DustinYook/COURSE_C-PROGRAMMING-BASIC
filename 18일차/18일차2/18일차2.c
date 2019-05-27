// 프로그램 목적: 학생의 원본 성적데이터를 읽어와서 처리 후 화면에 출력 및 보고서 저장 수행
// <1> 전처리기
#include <stdio.h>
#include <stdlib.h> // 파일입출력함수 사용을 위한 헤더파일
#define MAX_STUDENTS 100 // 메크로상수#1: 최대 입력 레코드 수를 정의
#define LEGEND 255 // 메크로상수#2: 원본 데이터를 가져올 때 범례부분을 지정 

// <2> 구조체 정의
struct st_record // 구조체명: st_record (8개 멤버변수 포함) => 학생별 성적레코드 구성 정의
{
	char name[12];  // 멤버변수1: 학생이름 
	int kor;        // 멤버변수2: 국어성적
	int eng;        // 멤버변수3: 영어성적
	int math;       // 멤버변수4: 수학성적
	int total;      // 멤버변수5: 총 점수
	double average; // 멤버변수6: 평균점수
	char grade;     // 멤버변수7: 전체평점
	int rank;       // 멤버변수8: 전체석차
} student[MAX_STUDENTS]; // 구조체 변수명: student

struct sub_record // 구조체명: sub_record (3개 멤버변수 포함) => 과목별 통계레코드 구성 정의
{
	char name[10];  // 멤버변수1: 과목이름 
	int total;      // 멤버변수2: 과목총점
	double average; // 멤버변수3: 과목평균
} subject[3] = { { "국어" },{ "영어" },{ "수학" } }; // 구조체 변수명: subject

// <3> 사용자정의함수 선언
char Grade(double input);     // 사용자정의함수1: 평균을 전달받아 평점을 반환
int Rank(int input);          // 사용자정의함수2: 레코드수(학생수)를 전달받아 석차반환
void File_Err();              // 사용자정의함수3: 파일이 정상적으로 열리지 않을때 처리
void Report_Print(int input); // 사용자정의함수4: 성적표 보고서 출력

// <4> 전역변수 선언
FILE* f_data; // 파일 포인터변수 선언
FILE* f_report; // 파일 포인터변수 선언

// <5> main함수 및 함수호출
int main(void) // main함수 시작
{
	// (1) 지역변수 선언
	char data[LEGEND]; // 원본 데이터에서 범례부분을 읽어와 처리하는 것 방지
	int i = 0, j = 0; // 제어변수
	int rec_num; // 읽어온 레코드 수 저장

	// (2) 원본데이터 읽어오기
	// "data.txt"라는 파일을 읽기모드로 열기 시도를 했을 때 정상으로 열리는지 판단
	if (fopen_s(&f_data, "data.txt", "r") != 0) 
		File_Err(); // 사용자정의함수3 호출

	// (3) 원본데이터 처리
	// 처리#1: 원본 데이터를 읽어와 성적처리
	fgets(data, LEGEND, f_data); // 원본 데이터의 범례 레코드를 읽어와서 오류방지 => 범례레코드로 아래의 처리하면 오류 발생 (1번 참고)
	while (fscanf_s(f_data, "%s%d%d%d", student[i].name, sizeof(student[i].name), &student[i].kor, &student[i].eng, &student[i].math) == 4) // (2번 참고)
	{ // 레코드의 구성원소 4개가 하나라도 입력되지 않은 레코드 또는 아래의 점수범위를 벗어난 점수를 하나라도 포함한 레코드는 처리대상에서 제외
		if ((student[i].kor >= 0 && student[i].kor <= 100) && (student[i].eng >= 0 && student[i].eng <= 100) && (student[i].math >= 0 && student[i].math <= 100)) 
		{ // 각 과목 점수가 0점에서 100점 사이에 있어야만 해당 레코드의 성적처리를 진행 => 논리적 오류 방지
			student[i].total = student[i].kor + student[i].eng + student[i].math; // 처리#1: 각 학생의 총점을 구함
			student[i].average = student[i].total / 3.; // 처리#2: 각 학생의 평균을 구함
			student[i].grade = Grade(student[i].average); // 처리#3: 각 학생의 평점을 구함
			i++; // 다음 학생을 처리하기 위해 제어변수 값을 증가시킴
		}
	} rec_num = i; // 정상적으로 입력된 레코드의 수를 파악
	Rank(rec_num); // 사용자정의함수2 호출 (3번 참고)
	// 처리#2: 각 학생의 성적레코드를 기반으로 과목별 통계자료 처리
	for (i = 0; i < rec_num; i++) // 과목별 총점: 학생은 레코드수만큼 존재하므로 레코드수만큼 반복
	{
		if ((student[i].kor >= 0 && student[i].kor <= 100) && (student[i].eng >= 0 && student[i].eng <= 100) && (student[i].math >= 0 && student[i].math <= 100))
		{ // 각 과목 점수가 0점에서 100점 사이에 있어야만 해당 과목의 통계처리를 진행 => 논리적 오류 방지
			subject[0].total += student[i].kor;  // 모든 학생의 국어성적을 누적합계
			subject[1].total += student[i].eng;  // 모든 학생의 영어성적을 누적합계
			subject[2].total += student[i].math; // 모든 학생의 수학성적을 누적합계
		}
	}
	for (i = 0; i < 3; i++) // 과목별 평균: 과목은 "국어, 영어, 수학" 3과목이 존재하므로 3번 반복
		subject[i].average = (double)subject[i].total / rec_num; // 주의) 반드시 형변환 연산자를 사용해야 실수표현이 가능해짐

	// (4) 보고서 파일출력 및 저장
	Report_Print(rec_num); // 사용자정의함수4 호출: 처리 보고서를 화면으로 출력
    // "report.hwp"라는 파일이 있으면 쓰기모드로 열고 파일이 있으면 덮어쓰기, 없으면 생성 후 작성 수행
	if (fopen_s(&f_report, "report.hwp", "w") != 0)  
		File_Err(); // 함수호출
	// 처리#1: 성적표 기본양식을 파일에 쓰기
	fprintf(f_report, "                <2017년 1학기 성적결과>                    \n");
	fprintf(f_report, "==========================================================\n");
	fprintf(f_report, "   번호    성명   국어 영어 수학  총점   평균   학점  등수\n");
	fprintf(f_report, "==========================================================\n");
	// 처리#2: 각 학생별 레코드를 화면에 출력
	for (i = 0; i < rec_num; i++)
	{
		fprintf(f_report, "%5d ", i + 1);
		fprintf(f_report, "%10s %4d %4d %4d ", student[i].name, student[i].kor, student[i].eng, student[i].math);
		fprintf(f_report, "%4d   %6.2lf  %4c  %4d\n", student[i].total, student[i].average, student[i].grade, student[i].rank);
		fprintf(f_report, "----------------------------------------------------------\n");
	} fprintf(f_report, "\n"); // 종료 문구와 구분
	// 처리#3: 과목별 통계자료 기본양식을 화면에 출력
	fprintf(f_report, "       <과목별 통계자료>\n");
	fprintf(f_report, "=================================\n");
	fprintf(f_report, "   과목명   과목총점   과목평균  \n");
	fprintf(f_report, "=================================\n");
	// 처리#4: 과목별 통계결과 레코드를 화면에 출력
	for (i = 0; i < 3; i++)
	{
		fprintf(f_report, "    %s     %4d      %6.2lf \n", subject[i].name, subject[i].total, subject[i].average); // 과목명, 과목총점, 과목평균
		fprintf(f_report, "---------------------------------\n"); // 레코드 간 구분
	} fprintf(f_report, "\n"); // 종료 문구와 구분

	// (5) 파일닫기
	fclose(f_data); 
	fclose(f_report); 

	return 0; // 실행종료
} // main함수 종료

// <5> 사용자정의함수 정의
char Grade(double input) // 사용자정의함수1: 평균을 전달받아 평점을 반환
{
	if (input >= 90)      // Case#1: 전달받은 평균이 100점 이하 90점 이상인 경우
		return 'A';
	else if (input >= 80) // Case#2: 전달받은 평균이 90점 미만 80점 이상인 경우 
		return 'B';
	else if (input >= 70) // Case#3: 전달받은 평균이 80점 미만 70점 이상인 경우
		return 'C';
	else if (input >= 60) // Case#4: 전달받은 평균이 70점 미만 60점 이상인 경우
		return 'D';
	else                  // Case#5: 전달받은 평균이 60점 미만인 경우
		return 'F';
}

int Rank(int input) // 사용자정의함수2: 레코드수(=학생수)를 전달받아 등수를 반환
{
	int i = 0; // 제어변수1: 비교기준 학생을 제어
	int j = 0; // 제어변수2: 비교대상 학생을 제어
	for (i = 0; i < input; i++) // 외부 for문: 첫번째학생부터 마지막학생의 바로 앞 학생까지 비교기준을 변화시킴 (마지막 학생은 자동으로 결정)
	{
		student[i].rank = 1; // 중요) 초기화: 
		for (j = 0; j < input; j++) // 내부 for문: 첫번째학생부터 마지막학생의 바로 앞 학생까지 비교대상을 변화시킴
			if (student[i].average < student[j].average) // 비교기준학생보다 비교대상학생의 평균이 높은 경우
				student[i].rank++; // 석차를 증가시킴 <=> 등수를 떨어뜨림
	} return student[i].rank; // 각 학생의 석차값을 반환
}

void File_Err() // 사용자정의함수3: 파일이 정상적으로 열리지 않을 때 처리
{
	fprintf(stderr, "해당 파일을 정상적으로 열 수 없습니다.\n\n\a\a\a\a"); // 파일이 없거나 용량부족의 경우 에러메세지와 경고음 출력
	exit(1); // 강제종료
}

void Report_Print(int input) // 사용자정의함수4: 성적표 보고서를 화면에 출력 (4번 참고)
{
	int i = 0; // 제어변수: 몇 번째 학생인지 제어
	// (1) 성적표 기본양식을 화면에 출력
	fprintf(stdout, "                    <2017년 1학기 성적결과>\n"); 
	fprintf(stdout, "=================================================================\n");
	fprintf(stdout, "   번호   성명   국어   영어   수학   총점    평균    학점   등수\n");
	fprintf(stdout, "=================================================================\n");
	// (2) 각 학생별 레코드를 화면에 출력
	for (i = 0; i < input; i++) // for문: 각 학생별 레코드 출력을 제어
	{
		fprintf(stdout, " %4d    ", i + 1); // 레코드 번호를 부여
		fprintf(stdout, "%-7s%4d   %4d   %4d   ", student[i].name, student[i].kor, student[i].eng, student[i].math); // 학생의 기본데이터
		fprintf(stdout, "%4d     %5.2lf  %4c  %4d\n", student[i].total, student[i].average, student[i].grade, student[i].rank); // 처리완료데이터
		fprintf(stdout, "-----------------------------------------------------------------\n"); // 레코드 간 구분
	} fprintf(stdout, "\n"); // 다음 표와 구분
	// (3) 과목별 통계자료 기본양식을 화면에 출력
	fprintf(stdout, "       <과목별 통계자료>\n");
	fprintf(stdout, "=================================\n");
	fprintf(stdout, "   과목명   과목총점   과목평균  \n");
	fprintf(stdout, "=================================\n");
	// (4) 과목별 통계결과 레코드를 화면에 출력
	for (i = 0; i < 3; i++)
	{
		fprintf(stdout, "    %s     %4d      %6.2lf \n", subject[i].name, subject[i].total, subject[i].average); // 과목명, 과목총점, 과목평균
		fprintf(stdout, "---------------------------------\n"); // 레코드 간 구분
	} fprintf(stdout, "\n"); // 종료 문구와 구분
}
// 1) fgets(배열명, 읽기수행할 문자열의 크기, 파일포인터변수): 파일에서 레코드단위로 데이터를 읽어옴 
// 2) 필드를 구성하는 요소(이름, 국어, 영어, 수학)가 모두 제대로 입력되었는지 판단
// 3) 레코드수(학생수)를 총원으로 등수를 구함 => 중요) 반드시 모든 학생의 데이터가 입력 및 처리된 이후에 석차를 구해야 논리적 오류 방지가능
// 4) fprintf(stdout, "출력문자열", 변수); => 읽어온 파일의 내용을 화면에 출력
//    fprintf(파일포인터, "제어문자열/출력문자열", 변수); => 각 변수에 저장된 내용을 파일에 기록