#include <iostream>
using namespace std;

int main() {
	char name[100];
	char street[100];
	int age = 0;

	cout << "�̸���?";
	cin.getline(name, 100);
	cout << "�ּҴ�?";
	cin.getline(street, 100);
	cout << "���̴�?";
	cin >> age;
	cout << name << "," << street << "," << age;

	return 0;
}