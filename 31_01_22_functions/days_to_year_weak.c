#include<stdio.h>

void convert_days_year(int);

void main()
{
	int days;

	printf("Enter the number of days: \n");
	scanf("%d",&days);

	convert_days_years(days);
}

void convert_days_years(int days)
{
	float year, weeks;

	year = (float)days/365;
	weeks = (float)(days*52)/365;

	printf("year is %d\nweeks is %d\n",year,weeks);
}
