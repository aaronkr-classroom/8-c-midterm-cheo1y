#pragma once

int best_grade;
int worst_grade;

int passing;
int failing;

// calculate_average: �迭�� �޾� ��� ������ ��ȯ�մϴ�.
double calculate_average(int grades[])
{
	double average = 0;
	int sum = 0;

	for (int i = 0; i < 10; i++)
		sum += grades[i];

	average = (double)sum / 10;

	return average;
}

// find_min_max: �迭�� �޾� ���� ���� ������ ���� ���� ������ ��ȯ�մϴ�.
void find_min_max(int grades[])
{
	int max = 0;
	int min = 100;

	for (int i = 0; i < 10; i++)
	{
		if (max < grades[i])
			max = grades[i];

		if (min > grades[i])
			min = grades[i];
	}

	best_grade = max;
	worst_grade = min;
}

// count_pass_fail: �迭�� �޾� �� ���� �հ��ߴ���, �� ���� ���հ��ߴ��� ����մϴ�.
void count_pass_fail(int grades[])
{
	for (int i = 0; i < 10; i++)
	{
		if (grades[i] >= 60)
			passing++;
		else
			failing++;
	}
}