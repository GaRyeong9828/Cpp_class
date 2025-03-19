#include <iostream>
using namespace std;

int main() {
	char a[100], b[100];

	cout << "새 암호를 입력하세요>>";
	cin.getline(a, 100);
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin.getline(b, 100);

	if (strcmp(a, b) == 0) {
		cout << "같습니다.";
	}
	else {
		cout << "같지 않습니다.";
	}

	return 0;
}