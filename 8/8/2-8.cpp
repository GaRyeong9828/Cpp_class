#include <iostream>
#include <string>
using namespace std;

int main() {
	string longest_name;
	char name[100];
	int max = 0;

	cout << "5 ���� �̸��� ';'���� �����Ͽ� �Է��ϼ���" << endl << ">>";

	for (int i = 0; i <= 4; i++) {

		cin.getline(name, 100, ';');
		cout << (i + 1) << ":" << name << endl;

		if (max < strlen(name)) {

			max = strlen(name);
			longest_name = name;
		}
	}

	cout << "���� �� �̸��� " << longest_name << endl;

	return 0;
}