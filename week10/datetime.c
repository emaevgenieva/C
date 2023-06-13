#define _CRT_SECURE_NO_WORNINGS
#include"datetime.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZEMONTH 13

int month[SIZEMONTH] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
char* formatingDate[3] = { "%d/%m/%y", "%a-%d-%b-%y", "%d, %b%, %y" };
void test(void) {
	datetime startDate;
	datetime endDate = { 0 };
	enter_date(&startDate);

	int days = 0;
	read_input_countDays(days);

	datetime* result = end_date(&startDate, days, &endDate);
	double resultDiff = date_difference(startDate, *result);
	printTime(result);
}
_Bool isLeap(int year) {
	if (year % 100 != 0 && year % 4 != 0 || year % 400 == 0) {
		return true;
	}
	else {
		return false;
	}
}
int days(int days, int month, int year) {
	int offset = days;
	switch (month - 1)
	{
	case 11:
		offset += 30; break;
	case 10:
		offset += 31; break;
	case 9:
		offset += 30; break;
	case 8:
		offset += 31; break;
	case 7:
		offset += 31; break;
	case 6:
		offset += 30; break;
	case 5:
		offset += 31; break;
	case 4:
		offset += 30; break;
	case 3:
		offset += 31; break;
	case 2:
		offset += 28; break;
	case 1:
		offset += 31; break;
	}
	if (isLeap(year) && month > 2) {
		offset += 1;
	}

	return offset;
}
void reverseOffsetDays(int offset, int year, int* day, int* month) {

	if (isLeap(year)) {
		month[2] = 29;
	}
	int i = 0;
	for (i = 0; i < SIZEMONTH; i++)
	{
		if (offset < month[i]) {
			break;
		}
		offset -= month[i];
	}
	*day = offset;
}
void enter_date(datetime* date) {
	int iCountDays = 0;
	printf("Enter date: \n");
	printf("day:");
	scanf_s("%d", &date->day);
	printf("Enter month: \n");
	printf("month:");
	scanf_s("%d", &date->month);
	printf("Enter year: \n");
	printf("year:");
	scanf_s("%d", &date->year);

}
struct datetime* end_date(datetime* start_date, int countDays, datetime* end_date) {
	char buffer[50];
	struct tm time_start;
	time_start.tm_year = start_date->year - 1900;
	time_start.tm_mon = start_date->month - 1;
	time_start.tm_mday = start_date->day;
	time_start.tm_sec = 0;
	time_start.tm_min = 0;
	time_start.tm_hour = 0;

	int time = mktime(&time_start);

	if (time == -1) {
		printf("Error: unable to make time using mktime\n");
	}
	else {
		strftime(buffer, sizeof(buffer), "%d.%m.%Y", &time_start);
	}
	struct tm tm_end;
	mktime(&tm_end);

	tm_end.tm_year = start_date->year - 1900;
	tm_end.tm_mon = start_date->month;
	tm_end.tm_mday = start_date->day + countDays;
	tm_end.tm_sec = 0;
	tm_end.tm_min = 0;
	tm_end.tm_hour = 0;

	end_date->year = tm_end.tm_year + 1900;
	end_date->month = tm_end.tm_mon;
	end_date->day = tm_end.tm_mday;

	return end_date;

}
double date_difference(datetime start_date, datetime end_date) {
	struct tm time_entry_begin;
	time_entry_begin.tm_sec = 0,
		time_entry_begin.tm_min = 0,
		time_entry_begin.tm_hour = 0,
		time_entry_begin.tm_mday = start_date.day,
		time_entry_begin.tm_mon = start_date.day - 1,
		time_entry_begin.tm_year = start_date.year - 1900;

	struct tm time_entry_end = {
		time_entry_begin.tm_sec = 0,
		time_entry_begin.tm_min = 0,
		time_entry_begin.tm_hour = 0,
		time_entry_begin.tm_mday = end_date.day,
		time_entry_begin.tm_mon = end_date.day - 1,
		time_entry_begin.tm_year = end_date.year - 1900
	};
	int secondsPerDay = 60 * 60 * 24;
	return (difftime(mktime(&time_entry_end), mktime(&time_entry_begin)) / secondsPerDay);
}
void read_input_countDays(int days) {
	printf("Enter count Days:\n");
	printf("Number of days:");
	scanf_s("%d", &days);
}
void printTime(datetime* final_date) {
	struct tm end_date;
	end_date.tm_sec = 0;
	end_date.tm_min = 0;
	end_date.tm_hour = 0;
	end_date.tm_mday = final_date->day;
	end_date.tm_mon = final_date->month;
	end_date.tm_year = final_date->year - 1900;

	mktime(&final_date);
	printf("Current date: %d/%d/%d", final_date->day, final_date->month, final_date->year);


}

