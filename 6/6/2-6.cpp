#include <iostream>
using namespace std;

int main() {
	char a[100], b[100];

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin.getline(a, 100);
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin.getline(b, 100);

	if (strcmp(a, b) == 0) {
		cout << "�����ϴ�.";
	}
	else {
		cout << "���� �ʽ��ϴ�.";
	}

	return 0;
}