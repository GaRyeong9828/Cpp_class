#include <iostream>
using namespace std;

int main() {

	char pw[100];

	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(pw, 100);
		if (strcmp(pw, "yes") == 0) {
			cout << "�����մϴ�..." << endl;
			break;
		}
	}

	return 0;
}