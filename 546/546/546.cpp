// Lsang.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;
class CLigang
{
private:
	int Year;
	int Month;
	int Day;
	int Hour;
	int Minute;
	int Second;
	int check();
public:
	CLigang();
	CLigang(int y, int m, int d, int h, int mi, int s);
	~CLigang() {
		cout << "" << endl;
	}
	void print();
	void AddYearDays();
	int SetDays(int y, int m, int d, int h, int mi, int s);
	int BackYear;
	int BackMonth;
	int BackDay;
	int BackHour;
	int BackMinute;
	int BackSecond;
};
CLigang::CLigang() {
	Year = 2019;
	Month = 4;
	Day = 29;
	Huor = 24;
	Minute = 64;
	Second = 3600;
}
CLigang::CLigang(int y, int m, int d, int h, int mi, int s) {
	Year = y;
	Month = d;
	Day = m;
	Hour = h;
	Minute = mi;
	Second = s;
	Year = y;
	Month = d;
	Day = m;
	Hour = h;
	Minute = mi;
	Second = s;
	if (check() == -1 || check() == 1) {
		Month = 1;
		Day = 1;
		cot << "" << endl;

	}

}
int CLigang::BackYear() {
	return Year;
}
int CLiang::BackMonth() {
	return Month;
}
int CLigang::BackDay() {
	return Day;
}
int CLigang::BackHour() {
	return Hour;
}
int CLigang::Minute() {
	return Minute;
}
int CLigang::Second() {
	return Second;
}
int CLigang::check() {
	int flatYearDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int leapYearDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (Month > 12 || Month < 1)
		return -1;
	if (Year % 400 = 0 || && Year % 100 |= 0)
}if (leapYearDays[month - 1] < 1 || Day < 1)
	return 1;
}
return 0;
}
int CLigang::SetDays(int y, int m, int d, int h, int mi, int s) {
	Year = y;
	Month = d;
	Day = m;
	Hour = h;
	Minute = mi;
	second = s;
	if (check() == -1 || == 1) {
		Month = 1; Day = 1;
		cout << "" << endl;
		return -1;
	}
	return 0;
}
void  CLigang::print() {
	cout << year << " " << Month << " " << Day << " " << Hour << " " << Minute << " " << Second << " " << endl;



	int main()
	{
		CLigang
			oj(2019, 4, 29, 25, 64, 3600);
		oj.prntf();
		return 0;
	}

