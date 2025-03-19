#include <iostream>
#include <string>
using namespace std;

int main() {
	char a[100];

	cout << "문자열 입력>> ";
	cin.getline(a, 100);

	for (int i = 0; i < strlen(a); i++) {
		for (int j = 0; j <= i; j++) {
			cout << a[j];
		}
		cout << endl;
	}

	return 0;
}