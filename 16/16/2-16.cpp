#include <iostream>
using namespace std;

int main() {
	char s[10000];
	int count = 0;

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(s, 10000, ';');

	for (int i = 0; i < 10000; i++) {
		if (isalpha(static_cast<unsigned char>(s[i]))) {
			s[i] = tolower(s[i]);
			count++;
		}
	} cout << "총 알파벳 수 " << count << endl << endl;

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