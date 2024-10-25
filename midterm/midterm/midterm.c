#include <stdio.h>
#include "grade_funcs.h"

extern int best_grade;
extern int worst_grade;

extern int passing;
extern int failing;

int main(void)
{
	// 1. 배열에 미리 저장된 10개의 학생 성적을 사용합니다(정수형).
	int grades[10] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 };

	// 2. 평균 성적을 계산합니다.
	double average = 0.0;
	average = calculate_average(grades);

	// 3. 가장 높은 성적과 가장 낮은 성적을 찾습니다.
	find_min_max(grades);

	printf("Average grade: %.1lf\n", average);
	printf("Highest grade: %d\n", best_grade);
	printf("Lowest grade: %d\n", worst_grade);

	// 4. 평균보다 높은 성적과 낮은 성적을 출력합니다.
	printf("\nGrades above average:");
	for (int i = 0; i < 10; i++)
	{
		if (grades[i] > average)
			printf(" %d", grades[i]);
	}

	printf("\nGrades below average:");
	for (int i = 0; i < 10; i++)
	{
		if (grades[i] < average)
			printf(" %d", grades[i]);
	}

	// 5. 몇 명의 학생이 합격하고 불합격했는지 카운트합니다. (60점 이상 합격, 60점 미만 불합격)
	count_pass_fail(grades);
	printf("\n\nNumber of students passing: %d\n", passing);
	printf("Number of students failing: %d\n", failing);

	getch();
	return 0;
}