#pragma once

int best_grade;
int worst_grade;

int passing;
int failing;

// calculate_average: 배열을 받아 평균 성적을 반환합니다.
double calculate_average(int grades[])
{
	double average = 0;
	int sum = 0;

	for (int i = 0; i < 10; i++)
		sum += grades[i];

	average = (double)sum / 10;

	return average;
}

// find_min_max: 배열을 받아 가장 높은 성적과 가장 낮은 성적을 반환합니다.
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

// count_pass_fail: 배열을 받아 몇 명이 합격했는지, 몇 명이 불합격했는지 계산합니다.
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