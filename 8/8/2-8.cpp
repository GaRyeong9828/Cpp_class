#include <iostream>
#include <string>
using namespace std;

int main() {
	string longest_name;
	char name[100];
	int max = 0;

	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << endl << ">>";

	for (int i = 0; i <= 4; i++) {

		cin.getline(name, 100, ';');
		cout << (i + 1) << ":" << name << endl;

		if (max < strlen(name)) {

			max = strlen(name);
			longest_name = name;
		}
	}

	cout << "가장 긴 이름은 " << longest_name << endl;

	return 0;
}