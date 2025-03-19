#include <iostream>
using namespace std;

int main() {
	char name[100];
	char street[100];
	int age = 0;

	cout << "이름은?";
	cin.getline(name, 100);
	cout << "주소는?";
	cin.getline(street, 100);
	cout << "나이는?";
	cin >> age;
	cout << name << "," << street << "," << age;

	return 0;
}