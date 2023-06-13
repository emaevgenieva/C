#pragma once

typedef enum weekday 
{
	E_Monday, 
	E_Thuesday,
	E_Wednesday,
	E_Thirsday,
	E_Friday,
	E_Saturday,
	E_Sunday
}daysOfWeek;
typedef enum month
{
	E_Jenuary,
	E_February,
	E_March,
	E_April,
	E_May,
	E_Juny,
	E_July,
	E_August,
	E_September,
	E_Octomber,
	E_November,
	E_December
}monthOfYear;
typedef struct datetime {
	unsigned day;
	monthOfYear month;
	unsigned year;
}datetime;
struct rentDates {
	datetime startDate;
	datetime endDate;
	unsigned countDays;

}rentDates;
_Bool isLeap(int year);
int days(int days, int month, int year);
void reverseOffsetDays(int offset, int year, int* day, int* month);
struct datetime* end_date(datetime* start_date, int countDays, datetime* end_date);
double date_difference(datetime start_date, datetime end_date);
void enter_date(datetime* date);
void read_input_countDays(int days);
void printTime(datetime* final_date);
void test(void);
