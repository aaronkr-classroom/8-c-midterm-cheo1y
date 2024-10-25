#include <stdio.h>
#include "grade_funcs.h"

extern int best_grade;
extern int worst_grade;

extern int passing;
extern int failing;

int main(void)
{
	// 1. �迭�� �̸� ����� 10���� �л� ������ ����մϴ�(������).
	int grades[10] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 };

	// 2. ��� ������ ����մϴ�.
	double average = 0.0;
	average = calculate_average(grades);

	// 3. ���� ���� ������ ���� ���� ������ ã���ϴ�.
	find_min_max(grades);

	printf("Average grade: %.1lf\n", average);
	printf("Highest grade: %d\n", best_grade);
	printf("Lowest grade: %d\n", worst_grade);

	// 4. ��պ��� ���� ������ ���� ������ ����մϴ�.
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

	// 5. �� ���� �л��� �հ��ϰ� ���հ��ߴ��� ī��Ʈ�մϴ�. (60�� �̻� �հ�, 60�� �̸� ���հ�)
	count_pass_fail(grades);
	printf("\n\nNumber of students passing: %d\n", passing);
	printf("Number of students failing: %d\n", failing);

	getch();
	return 0;
}