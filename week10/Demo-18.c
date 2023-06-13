#include <stdio.h>
#include<ctype.h>

enum daysofWeek { Mon, Tue, Wed,  Thur, Fri, Sat, Sun };

enum Workdays { Monday, Thuesday, Wednesday, Thursday, Friday };
enum State { working, notWorking };
void isDayOfWork(enum daysofWeek);
int main(void) {
	enum daysOfWeek day;
	day = Mon;
	isDayOfWork(day);
}
int isDayOfWork(daysofWeek) {

	switch (daysofWeek)
	{
	case 'Mon':
		return "working\n";
	case 'Tue':
		return "working\n";
	case 'Wed':
		return "working\n";
	case 'Thur':
		return "working\n";
	case 'Fri':
		return "working\n";
	default:
		return "Not working\n";
		break;
	}
}

