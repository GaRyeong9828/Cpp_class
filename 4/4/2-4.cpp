#include <iostream>
using namespace std;

int main() {
	float a, b, c, d, e;

	cout << "5개의 실수를 입력하라>> ";
	cin >> a >> b >> c >> d >> e;

	float max = a;

	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	if (max < d) {
		max = d;
	}
	if (max < e) {
		max = e;
	}
	cout << "제일 큰 수 = " << max;

	return 0;
}