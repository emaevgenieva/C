#include <stdio.h>
#include<string.h>
enum dayOfWeek
{
	Mon,
	Thue,
	Wed,
	Thur,
	Fr,
	Sat,
	Sun
};
enum workDay { WorkDay, Weekend };
enum WorkDay isWokrDay(enum dayOfWeek day)
{
	if (Mon <= day && day <= Fr) {
		return WorkDay;
	}
	else return Weekend;
}
const char* nameOfDays(enum workday weekday) {
	const char* p = NULL;

	switch (weekday)
	{
	case Mon:return p = "Monday";
	case Thue:return p = "Thuesday";
	case Wed:return p = "Wednesday";
	case Thur:return p = "Thursay";
	case Fr:return p = "Friday";
	case Sat:return p = "Saturday";
	case Sun:return p = "Sunday";
		break;
	default:return p;
		break;
	}
}
int main(void) {

	enum weekDays day = 0;
	for (day = Mon; day <= Sun; day++)
	{
		printf("\n%s - %d", nameOfDays(day), isWokrDay(day));
	}
	
}