#include <iostream>
using namespace std;

int main() {
	char s[10000];
	int count = 0;

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(s, 10000, ';');

	for (int i = 0; i < 10000; i++) {
		if (isalpha(static_cast<unsigned char>(s[i]))) {
			s[i] = tolower(s[i]);
			count++;
		}
	} cout << "�� ���ĺ� �� " << count << endl << endl;

	for (char i = 'a'; i <= 'z'; i++) {
		count = 0;

		for (int j = 0; j < 10000; j++)
			if (s[j] == i) count++;
		cout << i << " (" << count << ")	: ";

		for (int k = 0; k < count; k++) cout << "*";
		cout << endl;
	}

	return 0;
}