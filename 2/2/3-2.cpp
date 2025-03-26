#include <iostream>
#include <string>
using namespace std;

class Date {
	int year, month, day;
public:
	Date();
	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	Date(string a);

	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
	
	void show();

};

Date::Date(string a) {
	int index;
	year = stoi(a);

	index = a.find('/');
	month = stoi(a.substr(index + 1));

	index = a.find('/');
	day = stoi(a.substr(index + 1));
}

void Date::show() {
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}